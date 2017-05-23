//
//  WDPayPalPayment.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDPayment.h"

#import "WDPeriodic.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Defines PayPal payment method.
 */
@interface WDPayPalPayment : WDPayment 

/**
 @brief It describes recurring transactions.
 */
@property (strong, nonatomic, nullable) WDPeriodic *periodic;

/**
 @brief Initialize WDPayPalPayment object
 
 @param amount   amount that accompanies the transaction
 @param currency currency in which the transaction is processed
 
 @return a newly initialized object
 */
- (nullable instancetype)initWithAmount:(nonnull NSDecimalNumber *)amount currency:(WDCurrency)currency NS_DESIGNATED_INITIALIZER;

/**
 @brief Initialize WDPayPalPayment object
 
 @param amount   amount that accompanies the transaction
 @param currency currency in which the transaction is processed
 
 @return a newly initialized object
 */
- (nullable instancetype)initWithAmount:(nonnull NSDecimalNumber *)amount currencyString:(nonnull NSString *)currency NS_DESIGNATED_INITIALIZER;

- (nullable instancetype)init NS_UNAVAILABLE;

@end

/** @} */
