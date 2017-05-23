//
//  WDAlipayXBorderPayment.h
//  PaymentSDK
//
//  Created by Vrana, Jozef on 2/5/17.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDPayment.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Defines Alipay payment method.
 */

@interface WDAlipayPayment : WDPayment

/**
 *  @brief Initialize payment object
 *
 *  @param amount          Amount that accompanies the transaction
 *  @param amountCurrency  Currency in which the transaction is processed
 *  @param transactionType WDTransactionType transaction type
 *
 *  @return initialized object or nil
 */
- (nullable instancetype)initWithAmount:(nonnull NSDecimalNumber *)amount
                               currency:(WDCurrency)currency NS_DESIGNATED_INITIALIZER;

/**
 *  @brief Initialize payment object
 *
 *  @param amount          Amount that accompanies the transaction
 *  @param amountCurrency  Currency in which the transaction is processed
 *  @param transactionType WDTransactionType transaction type
 *
 *  @return initialized object or nil
 */
- (nullable instancetype)initWithAmount:(nonnull NSDecimalNumber *)amount
                               currencyString:(nonnull NSString *)currency NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)init NS_UNAVAILABLE;

@end

/** @} */
