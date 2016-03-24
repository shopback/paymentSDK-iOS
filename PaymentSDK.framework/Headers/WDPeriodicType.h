//
//  WDPeriodicType.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 11/5/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Indicates how and why a transaction occurs more than once */
typedef NS_ENUM (NSUInteger, WDPeriodicType) {
    /** Uninitialized or invalid value */
    WDPeriodicTypeUndefined = 0,
    
    /** Completes a financial transaction */
    WDPeriodicTypeInstallment,
    /** Occurs repeatedly, such as a subscription */
    WDPeriodicTypeRecurring,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDPeriodicTypeTotalNumber
};

/** @} */
