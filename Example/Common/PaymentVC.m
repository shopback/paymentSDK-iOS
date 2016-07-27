//
//  PaymentVC.m
//  Embedded
//
//  Created by Sedlak, Stefan on 7/27/16.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "PaymentVC.h"

#import <PaymentSDK/PaymentSDK.h>

#import "NSDateFormatter+Utils.h"
#import "NSString+Utils.h"

@implementation PaymentVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.client = [[WDClient alloc] initWithEnvironment:WDEnvironmentTEST];
}

- (void)merchant:(nonnull NSString *)merchantAccountID
     signPayment:(nonnull WDPayment *)payment byMerchantSecretKey:(nonnull NSString *)merchantSecretKey
{
    if (!payment) {
        return;
    }
    
    payment.merchantAccountID = merchantAccountID;
    payment.requestID = [[NSUUID UUID] UUIDString];
    payment.requestTimestamp = [NSDate date]; // UTC
    
    NSString *requestTimestampStr = [[NSDateFormatter requestTimestampDateFormatter] stringFromDate:payment.requestTimestamp];
    NSString *requestIDStr = payment.requestID;
    NSString *transactionTypeStr = WDTransactionTypeGetCode(payment.transactionType) ?: @"";
    NSString *amountStr = [payment.amount stringValue];
    NSString *currencyStr = WDCurrencyGetISOCode(payment.amountCurrency) ?: @"";
    NSString *IPAddressStr = payment.IPAddress;
    
    payment.requestSignature = [self serverSideSignatureCalculation:requestTimestampStr
                                                          requestID:requestIDStr
                                                         merchantID:merchantAccountID
                                                    transactionType:transactionTypeStr
                                                             amount:amountStr
                                                           currency:currencyStr
                                                          IPAddress:IPAddressStr
                                                          secretKey:merchantSecretKey];
}

- (NSString *)serverSideSignatureCalculation:(NSString *)requestTimestamp
                                   requestID:(NSString *)requestID
                                  merchantID:(NSString *)merchantID
                             transactionType:(NSString *)transactionType
                                      amount:(NSString *)amount
                                    currency:(NSString *)currency
                                   IPAddress:(NSString *)IPAddress
                                   secretKey:(NSString *)secretKey
{
    // request-timestamp - UTC in format yyyyMMddHHmmss
    // request-id
    // merchant-account-id
    // transaction-type
    // amount
    // currency
    // redirect-url (optional) - not used for mobile payments
    // ip-address (optional)
    // secretkey
    NSMutableString *signatureStr = [NSMutableString string];
    [signatureStr appendString:requestTimestamp];
    [signatureStr appendString:requestID];
    [signatureStr appendString:merchantID];
    [signatureStr appendString:transactionType];
    [signatureStr appendString:amount];
    [signatureStr appendString:currency];
    if (IPAddress) {
        [signatureStr appendString:IPAddress];
    }
    [signatureStr appendString:secretKey];
    
    NSString *signature = [signatureStr SHA256];
    return signature;
}

@end
