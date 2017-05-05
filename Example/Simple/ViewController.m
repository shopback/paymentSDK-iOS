//
//  ViewController.m
//  Simple
//
//  Created by Sedlak, Stefan on 7/21/16.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "ViewController.h"

#import <PassKit/PassKit.h>
#import <PassKit/PKPaymentAuthorizationViewController.h>

#import <libextobjc/EXTScope.h>
#import <PaymentSDK/PaymentSDK.h>

#define AMOUNT [NSDecimalNumber decimalNumberWithMantissa:199 exponent:-2 isNegative:NO]

NSString *const PMTitleApplePay = @"ApplePay";
NSString *const PMTitleCard     = @"Card";
NSString *const PMTitlePayPal   = @"PayPal";
NSString *const PMTitleSEPA     = @"SEPA";

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UIButton *payBtn;

@end

@implementation ViewController

#pragma mark - Overriden

- (void)viewDidLoad {
    [super viewDidLoad];
    if (!self.client) {
        self.payBtn.enabled = NO;
    }
}

#pragma marks - Action

- (IBAction)onPay:(UIButton *)sender {
    UIAlertController *ac = [UIAlertController alertControllerWithTitle:@"Payment method"
                                                                message:nil
                                                         preferredStyle:UIAlertControllerStyleActionSheet];
    
    void (^handler)(UIAlertAction *action) = ^(UIAlertAction * _Nonnull action) {
        NSString *title = action.title;
        WDPayment *payment = [self createPayment:title];
        if (!payment) {
            return;
        }
        sender.enabled = NO;
        @weakify(self, sender);
        [self.client makePayment:payment withCompletion:^(WDPaymentResponse * _Nullable response, NSError * _Nullable error) {
            @strongify(self, sender);
            sender.enabled = YES;
            
            NSString *alertTitle = error ? @"Error" : @"Success";
            NSString *alertMessage = error ? error.localizedDescription : @"Item(s) has been purchased.";
            UIAlertController *ac = [UIAlertController alertControllerWithTitle:alertTitle
                                                                        message:alertMessage
                                                                 preferredStyle:UIAlertControllerStyleAlert];
            
            [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:nil]];
            [self presentViewController:ac animated:YES completion:nil];
        }];
    };
    BOOL canMakeApplePayPayment = [self canMakeApplePayPayment];
    if (canMakeApplePayPayment) {
        [ac addAction:[UIAlertAction actionWithTitle:PMTitleApplePay style:UIAlertActionStyleDefault handler:handler]];
    }
    [ac addAction:[UIAlertAction actionWithTitle:PMTitleCard         style:UIAlertActionStyleDefault handler:handler]];
    [ac addAction:[UIAlertAction actionWithTitle:PMTitlePayPal       style:UIAlertActionStyleDefault handler:handler]];
    [ac addAction:[UIAlertAction actionWithTitle:PMTitleSEPA         style:UIAlertActionStyleDefault handler:handler]];
    [ac addAction:[UIAlertAction actionWithTitle:@"Cancel"           style:UIAlertActionStyleCancel handler:handler]];
    
    [self presentViewController:ac animated:YES completion:nil];
}

#pragma mark - Private

- (BOOL)canMakeApplePayPayment
{
    NSArray<NSString *> *networks = @[PKPaymentNetworkMasterCard, PKPaymentNetworkVisa];
    BOOL result = [PKPaymentAuthorizationViewController canMakePaymentsUsingNetworks:networks];
    return result;
}

- (WDPayment *)createPayment:(nonnull NSString *)title
{
    WDPayment *result = nil;
    if ([title isEqualToString:PMTitleApplePay]) {
        result = [self createPaymentApplePay];
    } else if ([title isEqualToString:PMTitleCard]) {
        result = [self createPaymentCard];
    } else if ([title isEqualToString:PMTitlePayPal]) {
        result = [self createPaymentPayPal];
    } else if ([title isEqualToString:PMTitleSEPA]) {
        result = [self createPaymentSEPA];
    }
    return result;
}

- (WDPayment *)createPaymentApplePay
{
    static NSString *const APPLE_MERCHANT_ID = @"merchant.com.wirecard.paymentsdk.example.Simple";
    WDApplePayManagedPayment *payment = [[WDApplePayManagedPayment alloc] initWithMerchant:APPLE_MERCHANT_ID andCountry:WDCountryUS];
    payment.amount = AMOUNT;
    payment.amountCurrency = WDCurrencyUSD;
    payment.transactionType = WDTransactionTypePurchase;
    
    static NSString *const WD_MERCHANT_ACCOUNT_ID = @"";
    static NSString *const WD_MERCHANT_SECRET_KEY = @"";
    [self merchant:WD_MERCHANT_ACCOUNT_ID signPayment:payment byMerchantSecretKey:WD_MERCHANT_SECRET_KEY];
    return payment;
}

- (WDPayment *)createPaymentCard
{
    WDCardPayment *payment = [[WDCardPayment alloc] initWithAmount:AMOUNT
                                                    amountCurrency:WDCurrencyUSD
                                                   transactionType:WDTransactionTypePurchase];
    static NSString *const WD_MERCHANT_ACCOUNT_ID = @"33f6d473-3036-4ca5-acb5-8c64dac862d1";
    static NSString *const WD_MERCHANT_SECRET_KEY = @"9e0130f6-2e1e-4185-b0d5-dc69079c75cc";
    [self merchant:WD_MERCHANT_ACCOUNT_ID signPayment:payment byMerchantSecretKey:WD_MERCHANT_SECRET_KEY];
    return payment;
}

- (WDPayment *)createPaymentPayPal
{
    WDOrderItem *orderItem = [WDOrderItem new];
    orderItem.name = @"The Watch";
    orderItem.amount = AMOUNT;
    orderItem.amountCurrency = WDCurrencyEUR;
    
    WDOrder *order = [WDOrder new];
    order.descriptor = @"DEMO DESCRIPTOR";
    order.number = [[NSUUID UUID] UUIDString];
    order.detail = @"DEMO ORDER DETAIL";
    order.items = @[orderItem];
    
    WDPayPalPayment *payment = [[WDPayPalPayment alloc] initWithAmount:AMOUNT currency:WDCurrencyEUR];
    payment.transactionType = WDTransactionTypeDebit;
    payment.order = order;
    
    static NSString *const WD_MERCHANT_ACCOUNT_ID = @"9abf05c1-c266-46ae-8eac-7f87ca97af28";
    static NSString *const WD_MERCHANT_SECRET_KEY = @"5fca2a83-89ca-4f9e-8cf7-4ca74a02773f";
    [self merchant:WD_MERCHANT_ACCOUNT_ID signPayment:payment byMerchantSecretKey:WD_MERCHANT_SECRET_KEY];
    return payment;
}

- (WDPayment *)createPaymentSEPA
{
    WDSEPAPayment *payment = [[WDSEPAPayment alloc] initWithCreditor:@"DE98ZZZ09999999999" andMandate:@"12345678"];
    payment.amount = AMOUNT;
    payment.amountCurrency = WDCurrencyEUR;
    payment.transactionType = WDTransactionTypePendingDebit;
    
    static NSString *const WD_MERCHANT_ACCOUNT_ID = @"4c901196-eff7-411e-82a3-5ef6b6860d64";
    static NSString *const WD_MERCHANT_SECRET_KEY = @"ecdf5990-0372-47cd-a55d-037dccfe9d25";
    [self merchant:WD_MERCHANT_ACCOUNT_ID signPayment:payment byMerchantSecretKey:WD_MERCHANT_SECRET_KEY];
    return payment;
}

@end
