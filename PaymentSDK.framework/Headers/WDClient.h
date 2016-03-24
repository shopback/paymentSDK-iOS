//
//  WDAPIClient.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDEnvironment.h"
#import "WDPaymentResponse.h"

@class WDPayment;
@class WDStyle;

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Payment processing client
 */
@interface WDClient : NSObject

- (nullable instancetype)init NS_UNAVAILABLE;

/**
 *  @brief It initilizes client for processing payments.
 *
 *  @param environment Environment for processing payments
 *
 *  @return An initialized object, or nil if an object could not be created for some reason that would not result in an exception
 */
- (nullable instancetype)initWithEnvironment:(WDEnvironment)environment NS_DESIGNATED_INITIALIZER;

/**
 *  @brief Trigger payment process
 *
 *  @details Payment method is defined by payment object. Each payment method is defined in separate subclass of WDPayment. Supported payment methods: WDApplePayManagedPayment, WDApplePayPayment, WDCardPayment, WDPayPalPayment, WDSEPAPayment
 *
 *  @param payment         defines payment process
 *  @param completionBlock will be called at the very end of payment flow. It provides payment response or a descriptive error with more details in the payment response
 */
- (void)makePayment:(nonnull WDPayment *)payment
     withCompletion:(nonnull WDCompletionBlock)completionBlock;

/**
 *  @brief Trigger payment process
 *
 *  @details Payment method is defined by payment object. Each payment method is defined in separate subclass of WDPayment. Supported payment methods: WDApplePayManagedPayment, WDApplePayPayment, WDCardPayment, WDPayPalPayment, WDSEPAPayment
 *
 *  @param payment         defines payment process
 *  @param style           not used at the moment
 *  @param completionBlock will be called at the very end of payment flow. It provides payment response or a descriptive error with more details in the payment response
 */
- (void)makePayment:(nonnull  WDPayment *)payment
          withStyle:(nullable WDStyle *)style
     withCompletion:(nonnull  WDCompletionBlock)completionBlock;

@end

/** @} */