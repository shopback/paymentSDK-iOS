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
 *  @brief First name and last name text field used with [UITextField placeholder]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *cardholderPlaceholder;

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
 *  @brief Security code text field used with [UITextField placeholder]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *securityCodePlaceholder;

/**
 *  @brief Scan title used with [UIBarButtonItem initWithTitle:style:target:action:]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *scanTitle;

/**
 *  @brief Set of supported card brands.
 *  @details If supportedCardBrands is set and does not contain recognized card brand of user card number the state changes to ::WDCardFieldStateCardUnsupported. Set can contain NSNumbers with ::WDCardBrand values. Example:
 
 style.supportedCardBrands = [NSSet setWithObjects:@(WDCardBrandAmex), @(WDCardBrandMasterCard), @(WDCardBrandVisa), nil];
 
 */
@property (strong, nonatomic) NSSet<NSNumber *> *supportedCardBrands;

@end

/** @} */
