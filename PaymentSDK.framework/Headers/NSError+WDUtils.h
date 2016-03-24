//
//  NSError+WDUtils.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/13/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

extern NSString *_Nonnull const WDPaymentSDKErrorDomain;

/** Error codes */
typedef NS_ENUM(NSInteger, WDErrorCode) {
    /** Uninitialized value or no error */
    WDErrorCodeOK = 0,

    /** General Error, always contains localized description */
    WDErrorCodeGeneral = -1,
    /** Payment method is not supported */
    WDErrorCodeUnsupportedPaymentMethod = -2,
    /** Invalid payment data */
    WDErrorCodeInvalidPaymentData = -3,
    /** User has canceled payment */
    WDErrorCodeUserCanceled = -4,
    /** Another payment is in progress */
    WDErrorCodePaymentInProgress = -5,
    /** Transaction has failed */
    WDErrorCodeTransactionFailure = -6
};

/**
 *  @brief error returned by WDCompletionBlock
 */
@interface NSError (WDUtils)

+ (nullable instancetype)wd_errorWithCode:(WDErrorCode)code;
+ (nullable instancetype)wd_errorWithCode:(WDErrorCode)code
                  andLocalizedDescription:(nonnull NSString *)localizedDescription;

@end

/** @} */