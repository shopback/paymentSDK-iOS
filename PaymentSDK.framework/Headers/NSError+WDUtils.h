//
//  NSError+WDUtils.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/13/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDLocale.h"

/** @addtogroup ios_sdk
 *  @{
 */

extern NSString *_Nonnull const WDPaymentSDKErrorDomain;

/** Error codes */
typedef NS_ENUM(NSInteger, WDErrorCode) {
    /** Uninitialized value or no error */
    WDErrorCodeOK                           = 0,
    /** General Error, always contains english description */
    WDErrorCodeGeneral                      = -1,
    
    /** Network related issue, SSL pinning issue, ATS, ...) */
    WDErrorCodeNetworkIssue                 = -2,
    /** Transaction has failed */
    WDErrorCodeTransactionFailure           = -3,
    
    /** Payment method is not supported */
    WDErrorCodeUnsupportedPaymentMethod     = -4,
    /** Invalid payment data */
    WDErrorCodeInvalidPaymentData           = -5,
    /** User has canceled payment */
    WDErrorCodeUserCanceled                 = -6,
    /** Another payment is in progress */
    WDErrorCodePaymentInProgress            = -7,
    /** Device is jailbroken */
    WDErrorCodeJailbrokenDevice             = -8
};

/**
 *  @brief error returned by WDCompletionBlock
 */
@interface NSError (WDUtils)

+ (nullable instancetype)wd_errorWithCode:(WDErrorCode)code andLocale:(WDLocale)locale;
+ (nullable instancetype)wd_errorWithCode:(WDErrorCode)code andLocalizedDescription:(nonnull NSString *)localizedDescription;

@end

/** @} */