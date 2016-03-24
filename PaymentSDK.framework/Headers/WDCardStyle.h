//
//  WDCardStyle.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 12/8/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDNativeStyle.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Style class for WDCardPayment method
 */
@interface WDCardStyle : WDNativeStyle

/**
 *  @brief First name text field used with [UITextField placeholder]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *firstNamePlaceholder;

/**
 *  @brief Last name text field used with [UITextField placeholder]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *lastNamePlaceholder;

/**
 *  @brief Card number text field used with [UITextField placeholder]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *cardNumberPlaceholder;

/**
 *  @brief Exppiry date text field used with [UITextField placeholder]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *expiryDatePlaceholder;

/**
 *  @brief Scan title used with [UIBarButtonItem initWithTitle:style:target:action:]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *scanTitle;

/**
 *  @brief Security code text field used with [UITextField placeholder]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *securityCodePlaceholder;

@end

/** @} */
