//
//  WDCardPayment.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDPayment.h"

#import "WDCardToken.h"
#import "WDPeriodic.h"
#import "WDSubMerchantInfo.h"
#import "WDAttempt.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Defines Card payment method
 */
@interface WDCardPayment : WDPayment

/**
 *  @brief Indicates that the Transaction Request should proceed with the 3D Secure workflow if the [Card Holder] is enrolled. Otherwise, the transaction proceeds without 3D Secure
 *  @details Default value is YES. In case of referenced transactions (WDTransactionTypeCaptureAuthorization, WDTransactionTypeReferencedAuthorization, WDTransactionTypeReferencedPurchase), it is ignored.
 */
@property (assign, nonatomic) WDAttempt attemptThreeD;

/**
 @brief It describes recurring transactions.
 */
@property (strong, nonatomic, nullable) WDPeriodic *periodic;

/**
 *  @brief Prompt [Card Holder] for security code, in case of referenced transactions.
 *  @details Default value is NO.
 */
@property (assign, nonatomic, getter=isSecurityCodeRequired) BOOL requireSecurityCode;

/**
 *  @brief Prompt Card Holder
 *  @details Default value is YES.
 */
@property (assign, nonatomic, getter=isCardholderRequired) BOOL requireCardholder;

/**
@Used to signalize card token usage
*/
@property (assign, nonatomic, getter=istokenIndicatorUsed) BOOL tokenUsageIndicator;

/**
 *  @brief Tokenized card data gathered by previous transaction [WDPaymentResponse cardToken].
 *  @details set [WDCardToken tokenID] if you want to use the same card as in previous transaction. In case of transaction referenced by parentTransactionID and security code is required set [WDCardToken maskedAccountNumber] to help user with security code typing
 */
@property (strong, nonatomic, nullable) WDCardToken *token;

/**
 *  @brief Info about particular merchant.
 *  @details It is optional.
 */
@property (strong, nonatomic, nullable) WDSubMerchantInfo *subMerchantInfo;

/**
 *  @brief Initialize Card payment object
 *
 *  @param amount          Amount that accompanies the transaction
 *  @param amountCurrency  Currency in which the transaction is processed
 *  @param transactionType WDTransactionType transaction type
 *
 *  @return initialized object or nil
 */
- (nullable instancetype)initWithAmount:(nonnull NSDecimalNumber *)amount
                         amountCurrency:(WDCurrency)amountCurrency
                        transactionType:(WDTransactionType)transactionType NS_DESIGNATED_INITIALIZER;

/**
 *  @brief Initialize Card payment object
 *
 *  @param amount          Amount that accompanies the transaction
 *  @param currency        Currency in which the transaction is processed
 *  @param transactionType WDTransactionType transaction type
 *
 *  @return initialized object or nil
 */
- (nullable instancetype)initWithAmount:(nonnull NSDecimalNumber *)amount
                               currencyString:(nonnull NSString *)currency
                        transactionType:(WDTransactionType)transactionType NS_DESIGNATED_INITIALIZER;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

/** @} */
