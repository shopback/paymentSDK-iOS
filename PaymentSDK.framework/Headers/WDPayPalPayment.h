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
 @brief It is used by risk library. The data collected by the Magnes library is used to complement the data that is obtained from the PayPal hosted pages.
 */
@property (strong, nonatomic, nullable) NSString *riskReferenceId;

/**
 @brief It is used by risk library. For merchants using an Advertising ID (IDFA), this parameter should be populated with the IDFA.
 */
@property (strong, nonatomic, nullable) NSString *advertisingIdentifier;

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

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

/** @} */
