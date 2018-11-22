//
//  PaymentVC.h
//  Embedded
//
//  Created by Sedlak, Stefan on 7/27/16.
//  Copyright © 2016 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDECClient;
@class WDECPayment;

@interface PaymentVC : UIViewController

@property (strong, nullable, nonatomic) WDECClient *client;

- (void)merchant:(nonnull NSString *)merchantAccountID
     signPayment:(nonnull WDECPayment *)payment byMerchantSecretKey:(nonnull NSString *)merchantSecretKey;

@end
