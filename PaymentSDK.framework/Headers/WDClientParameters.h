//
//  WDClientParameters.h
//  PaymentSDK
//
//  Created by Vrana, Jozef on 19/09/2017.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDEnvironment.h"
#import "WDTracker.h"

@interface WDClientParameters : NSObject

@property (assign, nonatomic) NSTimeInterval timeoutInterval;
@property (assign, nonatomic) WDEnvironment  environment;
@property (strong, nonatomic) NSString *     hostname;
@property (strong, nonatomic) WDTracker *    tracker;

- (instancetype)initWithTimeoutInterval:(NSTimeInterval)timeoutInterval
                            environment:(WDEnvironment)environment
                               hostname:(NSString *)hostName
                                tracker:(WDTracker *)tracker;


@end
