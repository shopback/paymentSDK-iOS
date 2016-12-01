//
//  WDPayment.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDCurrency.h"
#import "WDCustomerData.h"
#import "WDLocale.h"
#import "WDNotification.h"
#import "WDOrder.h"
#import "WDTransactionType.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Base class of all Payment Methods.
 *  @details Initialization WDPayment object is unavailable. Please use derived classes for initialization.
 */
@interface WDPayment : NSObject

/**
 *  @brief Authorize client to process the transaction.
 *  @details It is mandatory.
 */
@property (strong, nonatomic, nonnull) NSString *requestSignature;


/**
 *  @brief Date when requestSignature was generated
 *  @details It is mandatory for requestSignature
 */
@property (strong, nonatomic, nonnull) NSDate *requestTimestamp;

/**
 *  @brief 2nd generation signature. Authorize client to process the transaction. checkPayment works only with this signature.
 *  @details It is mandatory. It supersedes requestSignature and requestTimestamp.
 */
@property (copy, nonatomic, nonnull) NSString *signature;

/**
 *  @brief Unique identifier assigned for every Merchant Account.
 *  @details It is mandatory.
 */
@property (strong, nonatomic, nonnull) NSString *merchantAccountID;

/**
 *  @brief Category used by frontend merchant to resolve internal merchant for processing payment.
 *  @details It is optional.
 */
@property (strong, nonatomic, nullable) NSString *merchantAccountResolverCategory;

/**
 *  @brief Unique identifier associated with the transaction, which is created by the merchant.
 *  @details It is mandatory.
 */
@property (strong, nonatomic, nonnull) NSString *requestID;

/**
 @brief The only amount that accompanies the transaction when it is created and/or requested.
 @details For transactionType WDTransactionTypeAuthorizationOnly the only valid value is [NSDecimalNumber zero].
 It is mandatory.
 */
@property (strong, nonatomic, nullable) NSDecimalNumber *amount;

/**
 @brief Currency in which the transaction is processed.
 @details It is mandatory.
 */
@property (assign, nonatomic) WDCurrency amountCurrency;

/**
 @brief Determines transaction processing behaviour.
 @details It is mandatory.
 */
@property (assign, nonatomic) WDTransactionType transactionType;

/**
 @brief Customer's account information.
 @details It is optional.
 */
@property (strong, nonatomic, nullable) WDCustomerData *accountHolder;

/**
 @brief Customer's shipping information
 @details It is optional.
 */
@property (strong, nonatomic, nullable) WDCustomerData *shipping;

/**
 @brief Customer's order information.
 @details It is optional.
 */
@property (strong, nonatomic, nullable) WDOrder *order;

/**
 @brief Notifications configuration
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSArray<WDNotification *> *notifications;

/**
 @brief The IP Address of the Customer as recorded by the entity receiving the Transaction Attempt from the Customer
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSString *IPAddress;

/**
 @brief Defines the user's language and any special variant preferences that the user wants to see in their user interface.
 @details Typically used by WDPayPalPayment and 3D Secure WDCardPayment HTML formulars.
 It is optional.
 */
@property (assign, nonatomic ) WDLocale locale;

/**
 @brief transaction identifier of previous transaction gathered by [WDPaymentResponse transactionIdentifier]
 @details It is used with referenced transactions: WDTransactionTypeCaptureAuthorization, WDTransactionTypeReferencedAuthorization, WDTransactionTypeReferencedPurchase, WDTransactionTypeRefundCapture, WDTransactionTypeRefundPurchase and WDTransactionTypeVoidAuthorization
 */
@property (strong, nonatomic, nullable) NSString *parentTransactionID;

/**
 @brief Returns the notification for transaction state.
 @param state The transaction state defined by WDTransactionState enumaration
 @return Returns notification or nil if no associated notification.
 */
- (nullable WDNotification *)notificationForState:(WDTransactionState)state;

@end

/** @} */
