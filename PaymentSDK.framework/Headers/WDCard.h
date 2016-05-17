//
//  WDCard.h
//  PaymentSDK
//
//  Created by Sedlak, Stefan on 11/19/15.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDCardBrand.h"

/** @addtogroup ios_sdk @{ */

/**
 * @brief Non-sensitive card data
 */
@interface WDCard : NSObject

/**
 @brief Card expiration date.
 */
@property (copy, nonatomic) NSDate *expiryDate;

/**
 @brief Card brand
 */
@property (assign, nonatomic) WDCardBrand brand;

@end

/** @} */