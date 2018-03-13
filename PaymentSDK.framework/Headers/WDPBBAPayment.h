//
//  WDPBBAPayment.h
//  PaymentSDK
//
//  Created by Vrana, Jozef on 05/09/2017.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import <PaymentSDK/PaymentSDK.h>

/** @addtogroup ios_sdk
 *  @{
 */
@interface WDPBBAPayment : WDPayment

/**
 * @brief The delivery type chosen for the delivery of purchased goods.
 */
@property (strong, nonatomic, nonnull) NSString *pbbaDeliveryType;

/**
 * @brief Return String to redirect the consumer from the mobile banking app to the merchant’s browser or app.
 */
@property (strong, nonatomic, nonnull) NSString *pbbaReturnAppScheme;

/**
 * @brief Type of transaction.
 */
@property (strong, nonatomic, nonnull) NSString *pbbaTransactionType;

/**
 *  @brief Initialize PBBA payment object
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
 *  @brief Initialize PBBA payment object
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
