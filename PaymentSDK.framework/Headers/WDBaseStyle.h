//
//  WDBaseStyle.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 12/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDStyle.h"

@class UIButton;
@class UIView;

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
