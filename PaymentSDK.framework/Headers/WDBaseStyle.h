//
//  WDBaseStyle.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 12/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDStyle.h"

@class UIButton;
@class UILabel;
@class UIView;
@class UIImageView;

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Base class for formulars
 */
@interface WDBaseStyle : WDStyle

/**
 *  @brief main UIView prototype.
 *  @details Following properties are used:
 */
@property (strong, nonatomic) UIView *mainViewStyled;

/**
 *  @brief header UIView prototype.
 *  @details Following properties are used:
 */
@property (strong, nonatomic) UIView *headerViewStyled;

/**
 *  @brief Card header title UILabel prototype
 *  @details Following properties are used: TODO
 */
@property(strong, nonatomic) UILabel *headerLabelStyled;

/**
 *  @brief Header label value used by [UILabel text]
 */
@property (strong, nonatomic) NSString *headerLabelText;

/**
 *  @brief Cancel button prototype.
 *  @details Following properties are used:
 */
@property (strong, nonatomic) UIButton *cancelButtonStyled;

/**
 *  @brief Cancel button title used with [cancelButton setTitle:cancelButtonTitle forState:UIControlStateNormal]
 *  @details Overrides default localized value.
 */
@property (copy, nonatomic) NSString *cancelButtonTitle;

@end

/** @} */
