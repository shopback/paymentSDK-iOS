//
//  WDCardField.h
//  iPay
//
//  Created by Sedlak, Stefan on 4/12/16.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UITextField.h>

#import "WDCardBrand.h"
#import "WDLocale.h"

@class WDCardField;
@class WDCardPayment;

/**
 *  @addtogroup ios_sdk
 *  @{
 */

/** WDCardField states emitted during user interacion */
typedef NS_ENUM(NSUInteger, WDCardFieldState) {
    /** Initial state and state after [-[WDCardField clear]](@ref WDCardField.clear) */
    WDCardFieldStateCardInitial = 0,

    /** User entered valid card data */
    WDCardFieldStateCardValid,
    /** User is trying to type unsupported card type */
    WDCardFieldStateCardUnsupported,
    
    /** Card number UITextField is first responder */
    WDCardFieldStateNumberEditting,
    /** Card number is incomplete */
    WDCardFieldStateNumberIncomplete,
    /** Card number is invalid */
    WDCardFieldStateNumberInvalid,
    /** User entered valid card number */
    WDCardFieldStateNumberValid,
    
    /** Expiration month UITextField is first responder  */
    WDCardFieldStateMonthEditting,
    /** Expiration year UITextField is first responder */
    WDCardFieldStateYearEditting,
    
    /** Expiration date is incomplete */
    WDCardFieldStateExpirationDateIncomplete,
    /** Expiration date is invalid */
    WDCardFieldStateExpirationDateInvalid,
    /** User entered valid expiration date */
    WDCardFieldStateExpirationDateValid,
    
    /** Security code UITextField became first responder */
    WDCardFieldStateSecurityCodeEditting,
    /** Security code is incomplete */
    WDCardFieldStateSecurityCodeIncomplete,
    /** Security code is invalid */
    WDCardFieldStateSecurityCodeInvalid,
    /** Security code is valid */
    WDCardFieldStateSecurityCodeValid
};


/**
 *  @brief This protocol allows a delegate to be notified when a payment text field's contents change
 *  @details It can be used to take further actions depending on the validity of its contents.
 */
@protocol WDCardFieldDelegate <NSObject>
/**
 *  @brief Called when either the card number, expiration month/year or security code changes.
 *  @details At this point, one can call WDCardField.valid on the text field to determine, for example, whether or not to enable a button to submit WDCardPayment.
 *
 *  @param cardField the field that has changed
 *  @param state the cardField state
 */
- (void)cardField:(nonnull WDCardField *)cardField didChangeState:(WDCardFieldState)state;

@end


/**
 *  @brief Field for collecting card data
 *  @details WDCardField is a field with similar properties to UITextField, but specialized for collecting card data. It manages multiple UITextFields under the hood to collect this data. It's designed to fit on a single line, and from a design perspective can be used anywhere a UITextField would be appropriate.
 */
@interface WDCardField : UIControl

/**
 *  @brief The receiver’s delegate
 *  @details You can use the delegate to respond to the card data entered by the user
 */
@property(nonatomic, weak, nullable) IBOutlet id<WDCardFieldDelegate> delegate;

/**
 *  @brief Payment object where card data are appended.
 *  @details It can be set before either after user interaction
 */
@property(nonatomic, strong, nonnull) WDCardPayment *cardPayment;

/**
 *  @brief Whether or not the field currently contains a valid card number, expiration date and security code.
 */
@property(nonatomic, readonly, getter=isValid) BOOL valid;

/**
 *  @brief Card brand
 *  @details It set after user entered valid card number
 */
@property(nonatomic, readonly) WDCardBrand brand;

/**
 *  @brief WDLocale enum used to localize
 *  @details Localization of WDCardField happens in following order:

 - overriden WDCardField value (e.g. [WDCardField numberPlaceholder], etc.)
 - localized default value by [WDCardField locale]
 - localized default value by [NSLocale preferredLanguages]
 - if locale is not set or localization files are missing default english value is used.

 */
@property(nonatomic) WDLocale locale;

/**
 *  @brief Enable/disable selecting or editing the field.
 */
@property(nonatomic, getter=isEnabled) BOOL enabled;

/**
 *  @brief The font used in each UITextField and number format UILabel
 *  @details Default is [UIFont fontWithName:@"Menlo-Regular" size:15.0]. Set this property to nil to reset to the default. Monospace fonts are preferred as during number typing number format does not change width.
 */
@property(nonatomic, copy, null_resettable) UIFont *font UI_APPEARANCE_SELECTOR;

/**
 *  @brief The text color to be used when entering valid text.
 *  @details Default is [UIColor blackColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) UIColor *textColor UI_APPEARANCE_SELECTOR;

/**
 *  @brief The text color to be used when the user has entered invalid information, such as an invalid card number.
 *  @details Default is [UIColor redColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) UIColor *textErrorColor UI_APPEARANCE_SELECTOR;

/**
 *  @brief The text placeholder color used in each child field.
 *  @details Default is [UIColor lightGreyColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) UIColor *placeholderColor UI_APPEARANCE_SELECTOR;

/**
 *  @brief The placeholder for the card number field.
 *  @details Default is localized @"Credit Card number".
 */
@property(nonatomic, copy, null_resettable) NSString *numberPlaceholder;

/**
 *  @brief The placeholder for the expiration month field.
 *  @details Defaults to localized @"MM".
 */
@property(nonatomic, copy, null_resettable) NSString *expirationMonthPlaceholder;

/**
 *  @brief The placeholder for the expiration year field.
 *  @details Defaults to localized @"YY".
 */
@property(nonatomic, copy, null_resettable) NSString *expirationYearPlaceholder;

/**
 *  @brief The placeholder for the security code field.
 *  @details Defaults to @"CVC".
 */
@property(nonatomic, copy, null_resettable) NSString *securityCodePlaceholder;

/**
 *  @brief The keyboard appearance for the field.
 *  @details Default is UIKeyboardAppearanceDefault.
 */
@property(nonatomic, assign) UIKeyboardAppearance keyboardAppearance UI_APPEARANCE_SELECTOR;

/**
 *  @brief This behaves identically to setting the inputAccessoryView for each child UITextField.
 */
@property(nonatomic, strong, nullable) UIView *inputAccessoryView;

/**
 *  @brief The cursor color for the field.
 *  @details This is a proxy for the view's tintColor property, exposed for clarity only (in other words, calling setCursorColor is identical to calling setTintColor).
 */
@property(nonatomic, copy, null_resettable) UIColor *cursorColor UI_APPEARANCE_SELECTOR;

/**
 *  @brief Causes the text field to begin editing. Presents the keyboard.
 *  @return Whether or not the text field successfully began editing.
 */
- (BOOL)becomeFirstResponder;

/**
 *  @brief Causes the text field to stop editing. Dismisses the keyboard.
 *  @return Whether or not the field successfully stopped editing.
 */
- (BOOL)resignFirstResponder;

/**
 *  @brief Resets all of the contents of all of the fields.
 *  @details If the field is currently being edited, the number field will become selected.
 */
- (void)clear;

@end

/** @} */