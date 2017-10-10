//
//  PaymentSDK.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

/** @defgroup ios_sdk iOS SDK
 *  @{
 */

//! Project version number for PaymentSDK.
FOUNDATION_EXPORT double PaymentSDKVersionNumber;

//! Project version string for PaymentSDK.
FOUNDATION_EXPORT const unsigned char PaymentSDKVersionString[];

#import "PaymentSDKVersion.h"

#import "NSError+WDUtils.h"

#import "WDClient.h"

#import "WDAlipayPayment.h"

#import "WDApplePayManagedPayment.h"
#import "WDApplePayPayment.h"

#import "WDCard.h"
#import "WDCardField.h"
#import "WDCardPayment.h"
#import "WDCardStyle.h"

#import "WDPayPalPayment.h"
#import "WDPBBAPayment.h"

#import "WDSEPAPayment.h"
#import "WDSEPAStyle.h"

/** @} */
