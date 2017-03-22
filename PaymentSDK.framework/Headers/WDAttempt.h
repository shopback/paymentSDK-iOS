//
//  WDAttempt.h
//  PaymentSDK
//
//  Created by Vrana, Jozef on 3/1/17.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of attempt 3D states */
typedef NS_ENUM(NSUInteger, WDAttempt) {
    /** Uninitialized or invalid value */
    WDAttemptUndefined = 0,
    
    /** Provide 3D secure authentication if possible */
    WDAttemptYes,
    
    /** Avoid 3D secure authentication */
    WDAttemptNo,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDAttemptTotalNumber
};

/**
 @brief Converts attempt 3D string representation to WDAttempt enumeration
 
 @param code attempt 3D string representation
 
 @return WDAttempt enumeration
 */
WDAttempt WDAttemptThreeDFromCode(NSString *code);
/**
 @brief Converts attempt 3D WDAttempt enumeration to string representation
 
 @param attempt WDTAttempt enumeration
 
 @return attempt 3D string representation
 */
NSString *WDAttemptThreeDGetCode(WDAttempt attempt);

/** @} */

