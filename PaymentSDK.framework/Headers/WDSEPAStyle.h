//
//  WDSEPAStyle.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 12/8/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDNativeStyle.h"

@class UISwitch;
@class UITextView;

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Style class for WDSEPAPayment method
 */
@interface WDSEPAStyle : WDNativeStyle

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
 *  @brief IBAN text field used with [UITextField placeholder]
 *  @details Overrides default localized value.
 */
@property (strong, nonatomic) NSString *IBANPlaceholder;

/**
 *  @brief SEPA legal info UITextView prototype.
 *  @details Following properties are used: TODO
 */
@property (strong, nonatomic) UITextView *textViewStyled;

/**
 *  @brief Merchant name to fill in SEPA legal info UITextView.
 */
@property (strong, nonatomic) NSString *merchantName;

/**
 *  @brief SEPA legal agreement UISwitch prototype.
 *  @details Following properties are used: TODO
 */
@property (strong, nonatomic) UISwitch *switchStyled;

@end

/** @} */
