//
//  ViewController.m
//  Embedded
//
//  Created by Sedlak, Stefan on 7/21/16.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "ViewController.h"

#import <libextobjc/EXTScope.h>
#import <PaymentSDK/PaymentSDK.h>

#define NSStringize_helper(x) #x
#define NSStringize(x) @NSStringize_helper(x)

#define AMOUNT [NSDecimalNumber decimalNumberWithMantissa:199 exponent:-2 isNegative:NO]

@interface ViewController () <WDCardFieldDelegate>

@property (weak, nonatomic) IBOutlet WDCardField *cardField;
@property (weak, nonatomic) IBOutlet UILabel *cardFieldStateLabel;
@property (weak, nonatomic) IBOutlet UIButton *payBtn;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.cardField becomeFirstResponder];
}

- (IBAction)onClear:(UIButton *)sender {
    [self.cardField clear];
}

- (IBAction)onPay:(UIButton *)sender {
    // if you create payment object just before calling makePayment you are sure that timestamp is correct
    WDCardPayment *payment = [self createCardPayment];
    self.cardField.cardPayment = payment; // append card data

    payment = self.cardField.cardPayment;
    
    if (!self.client) {
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
        
        [ac addAction:[UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleCancel handler:nil]];
        [self presentViewController:ac animated:YES completion:nil];
        
        // each request shall have unique ID, once it is used create new one
        self.cardField.cardPayment = [self createCardPayment];
    }];
}
#pragma mark - WDCardFieldDelegate

- (void)cardField:(nonnull WDCardField *)cardField didChangeState:(WDCardFieldState)state {
    self.payBtn.enabled = cardField.valid;
    
#define SWITCH_CASE(value) case value: { text = NSStringize(value); break; }
    NSString *text = nil;
    switch (state) {
            SWITCH_CASE(WDCardFieldStateCardInitial)
            SWITCH_CASE(WDCardFieldStateJailbrokenDevice)
            SWITCH_CASE(WDCardFieldStateCardValid)
            SWITCH_CASE(WDCardFieldStateCardUnsupported)
            SWITCH_CASE(WDCardFieldStateNumberEditting)
            SWITCH_CASE(WDCardFieldStateNumberIncomplete)
            SWITCH_CASE(WDCardFieldStateNumberInvalid)
            SWITCH_CASE(WDCardFieldStateNumberValid)
            SWITCH_CASE(WDCardFieldStateMonthEditting)
            SWITCH_CASE(WDCardFieldStateYearEditting)
            SWITCH_CASE(WDCardFieldStateExpirationDateIncomplete)
            SWITCH_CASE(WDCardFieldStateExpirationDateInvalid)
            SWITCH_CASE(WDCardFieldStateExpirationDateValid)
            SWITCH_CASE(WDCardFieldStateSecurityCodeEditting)
            SWITCH_CASE(WDCardFieldStateSecurityCodeIncomplete)
            SWITCH_CASE(WDCardFieldStateSecurityCodeInvalid)
            SWITCH_CASE(WDCardFieldStateSecurityCodeValid)
    }
#undef SWITCH_CASE
    
    self.cardFieldStateLabel.text = text;
}

- (WDCardPayment *)createCardPayment {
    WDCardPayment *payment = [[WDCardPayment alloc] initWithAmount:AMOUNT
                                                    amountCurrency:WDCurrencyUSD
                                                   transactionType:WDTransactionTypePurchase];
    static NSString *const WD_MERCHANT_ACCOUNT_ID = @"33f6d473-3036-4ca5-acb5-8c64dac862d1";
    static NSString *const WD_MERCHANT_SECRET_KEY = @"9e0130f6-2e1e-4185-b0d5-dc69079c75cc";
    [self merchant:WD_MERCHANT_ACCOUNT_ID signPayment:payment byMerchantSecretKey:WD_MERCHANT_SECRET_KEY];
    payment.accountHolder = [self accountHolder];
    
    return payment;
}

- (WDCustomerData *)accountHolder {
    WDCustomerData *accountHolder = nil;
    accountHolder = [WDCustomerData new];
    accountHolder.lastName = @"Doe";
    
    return accountHolder;
}

@end
