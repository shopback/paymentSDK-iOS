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
    /** The Unscheduled Credential on File (ucof) allows the merchant to reference a regularly based transaction (like an unlimited periodic payment or an installment payment) to an already successfully submitted transaction. */
    WDPeriodicTypeUCOF,    
    /** The periodic type ci (Consumer Initiated) allows the merchant to identify that the cardholder himself initiated the transaction and whether this is an initial (first) or subsequent (recurring) one. */
    WDPeriodicTypeCI,
    /** Total number of values. It is used for validation and handled as invalid value */
    WDPeriodicTypeTotalNumber
};

/**
 @brief Converts periodic type string representation to WDPeriodicType enumeration
 
 @param code periodic type string representation
 
 @return WDPeriodicType enumeration
 */
WDPeriodicType WDPeriodicTypeFromCode(NSString *code);
/**
 @brief Converts periodic type WDPeriodicType enumeration to string representation
 
 @param periodicType WDPeriodicType enumeration
 
 @return periodic type string representation
 */
NSString *WDPeriodicTypeGetCode(WDPeriodicType periodicType);

/** @} */
