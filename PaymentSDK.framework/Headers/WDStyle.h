//
//  WDStyle.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 12/8/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDLocale.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Base class of all payment methods styles
 */
@interface WDStyle : NSObject

/**
 *  @brief WDLocale enum used to localize native UI
 *  @details Localization of native components happens in following order:
 
 - overriden UI component value (e.g. [WDSEPAStyle cancelButtonTitle], etc.)
 - localized value by [WDStyle locale]
 - localized value by [WDPayment locale]
 - localized value by [NSLocale preferredLanguages]
 - if localization is not set or localization files are missing default english value is used.

 */
@property (assign, nonatomic) WDLocale locale;

@end

/** @} */
