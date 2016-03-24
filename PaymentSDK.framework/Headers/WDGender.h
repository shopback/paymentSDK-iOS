//
//  WDGender.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** Gender */
typedef NS_ENUM(NSUInteger, WDGender) {
    /** Uninitialized or invalid value */
    WDGenderUndefined = 0,
    
    /** Male */
    WDGenderMale,
    /** Female */
    WDGenderFemale,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDGenderTotalNumber
};

/** @} */
