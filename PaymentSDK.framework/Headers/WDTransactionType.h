//
//  WDTransactionType.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of transaction types */
typedef NS_ENUM(NSUInteger, WDTransactionType) {
    /** Uninitialized or invalid value */
    WDTransactionTypeUndefined = 0,
    
    /** Reserves funds from the [Card Holder]'s account. 7 days left to conduct a WDTransactionTypeCaptureAuthorization on the transaction.
     
     String representation: authorization
     */
    WDTransactionTypeAuthorization,
    /** Verifies the card's validity without leaving an authorized amount.
     
     String representation: authorization-only
     */
    WDTransactionTypeAuthorizationOnly,
    /** Takes funds from the [Card Holder]'s account. Must follow an WDTransactionTypeAuthorization
     
     String representation: capture-authorization
     */
    WDTransactionTypeCaptureAuthorization,
    /** Moves funds from the Account Holder to the Merchant.
     
     String representation: debit
     */
    WDTransactionTypeDebit,
    /** Represents the request for a debit. If the transaction state is success, then the outcome of the debit is not yet known.
     
     String representation: pending-debit
     */
    WDTransactionTypePendingDebit,
    /** Takes funds from the [Card Holder]'s account. A one-step process to conduct two transaction types: WDTransactionTypeAuthorization and WDTransactionTypeCapture.
     
     String representation: purchase
     */
    WDTransactionTypePurchase,
    /** Reserve funds from the [Card Holder]'s account. Identical to a WDTransactionTypeAuthorization except for the fact that it Refers to a previous WDTransactionTypeAuthorization transaction.
     
     String representation: referenced-authorization
     */
    WDTransactionTypeReferencedAuthorization,
    /** Takes funds from the [Card Holder]'s account. Identical to a WDTransactionTypePurchase except for the fact that it refers to a previous WDTransactionTypePurchase transaction.
     
     String representation: referenced-purchase
     */
    WDTransactionTypeReferencedPurchase,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    WDTransactionTypeTotalNumber
};

/**
 @brief Converts transaction type string representation to WDTransactionType enumeration
 
 @param code transaction type string representation
 
 @return WDTransactionType enumeration
 */
WDTransactionType WDTransactionTypeFromCode(NSString *code);
/**
 @brief Converts transaction type WDTransactionType enumeration to string representation
 
 @param transactionType transaction type WDTransactionType enumeration
 
 @return transaction type string representation
 */
NSString *WDTransactionTypeGetCode(WDTransactionType transactionType);

/** @} */
