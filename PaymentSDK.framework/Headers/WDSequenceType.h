//
//  WDSequenceType.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 11/5/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Indicates the sequence of the recurring transaction */
typedef NS_ENUM (NSUInteger, WDSequenceType) {
    /** Uninitialized or invalid value */
    WDSequenceTypeUndefined = 0,
    
    /** The first transaction in a series of recurring transactions */
    WDSequenceTypeFirst,
    /** A transaction that is part of a series of recurring transactions */
    WDSequenceTypeRecurring,
    /** The final transaction in a series of recurring transactions. A payment with this sequence type completes a chain of recurring payments. */
    WDSequenceTypeFinal,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDSequenceTypeTotalNumber
};

/** @} */
