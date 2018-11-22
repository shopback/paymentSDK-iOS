//
//  WDECCustomerData.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDECAddress.h"
#import "WDECGender.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Customer data to describe account holder or shipping
 */
@interface WDECCustomerData : NSObject

/** First name
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable) NSString *firstName;
/** Last name
 @details Max. length 32. It is mandatory.
 */
@property (strong, nonatomic, nonnull ) NSString *lastName;
/** Email address
 @details Max. length 64. It is optional.
 */
@property (strong, nonatomic, nullable) NSString *email;
/** Phone number
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable) NSString *phone;
/** Consumer's gender
 @details It is optional.
 */
@property (assign, nonatomic          ) WDECGender gender;
/** Consumer's date of birth
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSDate   *dateOfBirth;
/** Address
 @details It is optional.
 */
@property (strong, nonatomic, nullable) WDECAddress *address;

@end

/** @} */
