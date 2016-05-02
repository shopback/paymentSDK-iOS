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

typedef NS_ENUM(NSUInteger, WDCardBrand) {
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
    
    WDCardBrandTotalNumber
};

/** @} */