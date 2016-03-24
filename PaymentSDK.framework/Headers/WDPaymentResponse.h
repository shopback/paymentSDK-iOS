//
//  WDPaymentResponse.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDPayment.h"

#import "WDCardToken.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Payment response from ElasticEngine
 * @details Contains repsonse data from ElasticEngine
 */
@interface WDPaymentResponse : WDPayment

/** Indicates transaction state as enumerated in WDTransactionState. */
@property (assign, nonatomic) WDTransactionState transactionState;

/** A unique identifier assigned for every Transaction. */
@property (strong, nonatomic, nullable) NSString *transactionIdentifier;

/** Tokenized sensitive card data */
@property (strong, nonatomic, nullable) WDCardToken *cardToken;

/**  */
@property (strong, nonatomic, nullable) NSString *statusMessage;

@end

/** Transaction completion block with response from ElasticEngine or error occoured during transaction
 
 @param response the response from ElasticEngine.
 @param error occoured during transaction.
 */
typedef void (^WDCompletionBlock)(WDPaymentResponse *_Nullable response, NSError *_Nullable error);

/** @} */
