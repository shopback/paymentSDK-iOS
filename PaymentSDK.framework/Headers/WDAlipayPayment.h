//
//  WDAlipayXBorderPayment.h
//  PaymentSDK
//
//  Created by Vrana, Jozef on 2/5/17.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import "WDPayment.h"

@interface WDAlipayPayment : WDPayment

- (nullable instancetype)initWithAmount:(nonnull NSDecimalNumber *)amount currency:(WDCurrency)currency NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)init NS_UNAVAILABLE;

@end
