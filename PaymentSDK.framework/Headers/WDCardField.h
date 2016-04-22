//
//  WDCardField.h
//  iPay
//
//  Created by Sedlak, Stefan on 4/12/16.
//  Copyright © 2016 Wirecard AG. All rights reserved.
//

#import <UIKit/UITextField.h>

#import "WDCardBrand.h"

@class WDCardField;
@class WDCardPayment;

typedef NS_ENUM(NSUInteger, WDCardFieldState) {
    WDCardFieldStateCardInitial = 0,

    WDCardFieldStateCardValid,
    WDCardFieldStateCardUnsupported,
    
    WDCardFieldStateNumberEditting,
    WDCardFieldStateNumberIncomplete,
    WDCardFieldStateNumberInvalid,
    WDCardFieldStateNumberValid,
    
    WDCardFieldStateMonthEditting,
    WDCardFieldStateYearEditting,
    
    WDCardFieldStateExpirationDateIncomplete,
    WDCardFieldStateExpirationDateInvalid,
    WDCardFieldStateExpirationDateValid,
    
    WDCardFieldStateSecurityCodeEditting,
    WDCardFieldStateSecurityCodeIncomplete,
    WDCardFieldStateSecurityCodeInvalid,
    WDCardFieldStateSecurityCodeValid
};

/**
 *  This protocol allows a delegate to be notified when a payment text field's contents change, which can in turn be used to take further actions depending on the validity of its contents.
 */
@protocol WDCardFieldDelegate <NSObject>
@optional
/**
 *  Called when either the card number, expiration month/year or security code changes. At this point, one can call -isValid on the text field to determine, for example, whether or not to enable a button to submit the form. Example:
 
 - (void)cardFieldDidChange:(WDCardField *)cardField {
     self.paymentButton.enabled = cardField;
 }
 
 *
 *  @param cardField the text field that has changed
 *  @param state the text field state
 */
- (void)cardField:(nonnull WDCardField *)cardField didChangeState:(WDCardFieldState)state;

@end


@interface WDCardField : UIControl


@property(nonatomic, weak, nullable) IBOutlet id<WDCardFieldDelegate> delegate;

@property(nonatomic, strong, nonnull) WDCardPayment *cardPayment;

/**
 *  Whether or not the form currently contains a valid card number, expiration date and security code.
 */
@property(nonatomic, readonly, getter=isValid) BOOL valid;

@property(nonatomic, readonly) WDCardBrand brand;

/**
 *  Enable/disable selecting or editing the field.
 */
@property(nonatomic, getter=isEnabled) BOOL enabled;

/**
 *  The font used in each child field. Default is [UIFont systemFontOfSize:18]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) UIFont *font UI_APPEARANCE_SELECTOR;

/**
 *  The text color to be used when entering valid text. Default is [UIColor blackColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) UIColor *textColor UI_APPEARANCE_SELECTOR;

/**
 *  The text color to be used when the user has entered invalid information, such as an invalid card number. Default is [UIColor redColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) UIColor *textErrorColor UI_APPEARANCE_SELECTOR;

/**
 *  The text placeholder color used in each child field. Default is [UIColor lightGreyColor]. Set this property to nil to reset to the default. On iOS 7 and above, this will also set the color of the card placeholder icon.
 */
@property(nonatomic, copy, null_resettable) UIColor *placeholderColor UI_APPEARANCE_SELECTOR;

/**
 *  The placeholder for the card number field. Default is @"Card number". If this is set to something that resembles a card number, it will automatically format it as such (in other words, you don't need to add spaces to this string).
 */
@property(nonatomic, copy, null_resettable) NSString *numberPlaceholder;

/**
 *  The placeholder for the expiration month field. Defaults to @"MM".
 */
@property(nonatomic, copy, null_resettable) NSString *expirationMonthPlaceholder;

/**
 *  The placeholder for the expiration year field. Defaults to @"YY".
 */
@property(nonatomic, copy, null_resettable) NSString *expirationYearPlaceholder;

/**
 *  The placeholder for the security code field. Defaults to @"CVC".
 */
@property(nonatomic, copy, null_resettable) NSString *securityCodePlaceholder;

/**
 *  The keyboard appearance for the field. Default is UIKeyboardAppearanceDefault.
 */
@property(nonatomic, assign) UIKeyboardAppearance keyboardAppearance UI_APPEARANCE_SELECTOR;

/**
 *  This behaves identically to setting the inputAccessoryView for each child text field.
 */
@property(nonatomic, strong, nullable) UIView *inputAccessoryView;

/**
 *  The cursor color for the field. This is a proxy for the view's tintColor property, exposed for clarity only (in other words, calling setCursorColor is identical to calling setTintColor).
 */
@property(nonatomic, copy, null_resettable) UIColor *cursorColor UI_APPEARANCE_SELECTOR;

/**
 *  Causes the text field to begin editing. Presents the keyboard.
 *
 *  @return Whether or not the text field successfully began editing.
 *  @see UIResponder
 */
- (BOOL)becomeFirstResponder;

/**
 *  Causes the text field to stop editing. Dismisses the keyboard.
 *
 *  @return Whether or not the field successfully stopped editing.
 *  @see UIResponder
 */
- (BOOL)resignFirstResponder;

/**
 *  Resets all of the contents of all of the fields. If the field is currently being edited, the number field will become selected.
 */
- (void)clear;

@end
