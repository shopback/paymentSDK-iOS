//
//  WDTransactionState.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of transaction states */
typedef NS_ENUM(NSUInteger, WDTransactionState) {
    /** Uninitialized or invalid value */
    WDTransactionStateUndefined = 0,
    
    /** Successful state */
    WDTransactionStateSuccess,
    /** Failure state */
    WDTransactionStateFailed,
    /** In-progress state */
    WDTransactionStateInProgress,
    /** Repeated state */
    WDTransactionStateRepeated,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDTransactionStateTotalNumber
};

/** @} */
