//
//  WDCardBrand.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 11/19/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of card brands */
typedef NS_ENUM(NSUInteger, WDCardBrand) {
    /** Uninitialized or invalid value */
    WDCardBrandUndefined = 0,
    
    WDCardBrandAmex,
    WDCardBrandAura,
    WDCardBrandCarteBancaire,
    WDCardBrandCarteBleue,
    WDCardBrandCUP,
    WDCardBrandDiners,
    WDCardBrandDiscover,
    WDCardBrandExpressCheckout,
    WDCardBrandHipercard,
    WDCardBrandJCB,
    WDCardBrandMaestro,
    WDCardBrandMaestroUK,
    WDCardBrandMasterCard,
    WDCardBrandSorocred,
    WDCardBrandUATP,
    WDCardBrandVisa,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDCardBrandTotalNumber
};

/**
 @brief Converts card brand string representation to WDCardBrand enumeration
 
 @param code card brand string representation
 
 @return WDCardBrand enumeration
 */
WDCardBrand WDCardBrandFromCode(NSString *code);

/**
 @brief Converts card brand WDCardBrand enumeration to string representation
 
 @param cardBrand card brand WDCardBrand enumeration
 
 @return card brand string representation
 */
NSString *WDCardBrandGetCode(WDCardBrand cardBrand);

/** @} */