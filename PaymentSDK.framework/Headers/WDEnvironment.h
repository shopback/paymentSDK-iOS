//
//  WDEnvironment.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 11/3/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  List of supported environments
 */
typedef NS_ENUM(NSUInteger, WDEnvironment) {
    /**
     *  Uninitialized or invalid value
     */
    WDEnvironmentUndefined = 0,

    /**
     *  Production environment
     */
    WDEnvironmentPROD,
    /**
     *  Singapore production environment
     */
    WDEnvironmentSingaporePROD,
    /**
     *  Toronto production environment
     */
    WDEnvironmentTorontoPROD,
    /**
     *  Central and Eastern Europe production environment
     */
    WDEnvironmentCEEPROD,

    /**
     *  Test/Sandbox environment
     */
    WDEnvironmentTEST = 100,
    /**
     *  Singapore test/sandbox environment
     */
    WDEnvironmentSingaporeTEST,
    /**
     *  Toronto test/sandbox environment
     */
    WDEnvironmentTorontoTEST,
    /**
     *  Central and Eastern Europe test/sandbox environment
     */
    WDEnvironmentCEETEST = 104,

    /**
     *  Total number of environments. It is used for validation and handled as invalid value
     */
    WDEnvironmentTotalNumber
};

/** @} */
