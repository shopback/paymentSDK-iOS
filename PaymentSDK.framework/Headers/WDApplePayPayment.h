//
//  WDApplePayPayment.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDPayment.h"

@class PKPayment;
@class PKPaymentSummaryItem;

/** @addtogroup ios_sdk
 *  @{
 */

/**
 @brief Defines ApplePay payment method.
 @details It is merchant's app responsibility to gather parameters via PKPaymentAuthorizationViewController
 */
@interface WDApplePayPayment : WDPayment

/**
 @brief Initializes payment object with parameters gathered via PKPaymentAuthorizationViewController
 
 @param payment         PKPayment object gathered via PKPaymentAuthorizationViewController
 @param summaryItems    summaryItems gathered via PKPaymentAuthorizationViewController
 @param currency        currency code. Supported codes: @"GBP", "@"USD"
 @param transactionType transaction type. Supported transaction types: WDTransactionTypeAuthorization, WDTransactionTypeCaptureAuthorization, WDTransactionTypePurchase, WDTransactionTypeReferencedAuthorization, WDTransactionTypeReferencedPurchase, WDTransactionTypeRefundCapture, WDTransactionTypeRefundPurchase, WDTransactionTypeVoidAuthorization
 
 @return initialized object with payment data
 */
- (nullable instancetype)initWithPayment:(nonnull PKPayment *)payment
                            summaryItems:(nonnull NSArray<PKPaymentSummaryItem *> *)summaryItems
                                currency:(WDCurrency)currency
                         transactionType:(WDTransactionType)transactionType NS_DESIGNATED_INITIALIZER;

@end

/** @} */
