//
//  WDPeriodic.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 11/5/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDPeriodicType.h"
#import "WDSequenceType.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Describes how the recurring transaction is related to previous/following transaction(s)
 */
@interface WDPeriodic : NSObject

/**
 @brief Indicates how and why a Payment occurs more than once
 @details It is intended as differentiation for the merchant's use. Which of the two [periodic type](WDPeriodicType) is chosen depends on the merchant's business model.
 
 - WDPeriodicTypeInstallment indicates one in a set that completes a financial transaction.
 - WDPeriodicTypeRecurring: indicates one in a set that occurs repeatedly, such as a subscription.
 
 Both WDPeriodicTypeInstallment and WDPeriodicTypeRecurring transactions will be processed the same way.
 */
@property (assign, nonatomic) WDPeriodicType periodicType;

/** Indicates the sequence of the recurring transaction */
@property (assign, nonatomic) WDSequenceType sequenceType;

@end

/** @} */
