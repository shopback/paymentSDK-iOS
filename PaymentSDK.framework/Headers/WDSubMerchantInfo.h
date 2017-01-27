//
//  WDSubmerchantInfo.h
//  PaymentSDK
//
//  Created by Vrana, Jozef on 12/20/16.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDCountry.h"

@interface WDSubMerchantInfo : NSObject

/**
 @brief SubmerchantInfo city.
 */
@property (strong, nonatomic) NSString *city;

/**
 @brief SubmerchantInfo country.
 */
@property (assign, nonatomic) WDCountry country;

/**
 @brief SubmerchantInfo identifier.
 */
@property (strong, nonatomic) NSString *identifier;

/**
 @brief SubmerchantInfo name.
 */
@property (strong, nonatomic) NSString *name;

/**
 @brief SubmerchantInfo postalCode.
 */
@property (strong, nonatomic) NSString *postalCode;

/**
 @brief SubmerchantInfo state.
 */
@property (strong, nonatomic) NSString *state;

/**
 @brief SubmerchantInfo street.
 */
@property (strong, nonatomic) NSString *street;

@end
