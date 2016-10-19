//
//  WDBaseStyle.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 12/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDBaseStyle.h"

@class UILabel;
@class UITextField;
@class UIImageView;

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Base class for native UI formulars
 */
@interface WDNativeStyle : WDBaseStyle

/**
 *  @brief UILabel prototype
 *  @details Following properties are used: TODO
 */
@property (strong, nonatomic) UILabel *orderLabelStyled;
/**
 *  @brief Order Total label value used by [UILabel text]
 */
@property (copy,   nonatomic) NSString *orderLabelText;

/**
 *  @brief UILabel prototype
 *  @details Following properties are used: TODO
 */
@property (strong, nonatomic) UILabel *labelStyled;

/**
 *  @brief UITextField prototype
 *  @details Following properties are used: TODO
 */
@property (strong, nonatomic) UITextField *textFieldStyled;

/**
 *  @brief Submit button prototype.
 *  @details Following properties are used: TODO
 */
@property (strong, nonatomic) UIButton *submitButtonStyled;

/**
 *  @brief Submit button title used by [UIButton setTitle:forState:]
 *  @details Overrides default localized value.
 */
@property (copy,   nonatomic) NSString *submitButtonTitle;

/**
 *  @brief security code underline UIView prototype.
 *  @details Following properties are used: TODO
 */
@property (strong, nonatomic) UIView *underlineViewStyled;

@end

/** @} */
