//
//  WDBool.h
//  PaymentSDK
//
//  Created by Vrana, Jozef on 3/24/17.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of general boolean values */
typedef NS_ENUM(NSUInteger, WDBool) {
    /** Uninitialized or invalid value */
    WDBoolUndefined = 0,
    
    /** Positive boolean value */
    WDBoolYes,
    /** Negative boolean value */
    WDBoolNo,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDBoolTotalNumber
};

