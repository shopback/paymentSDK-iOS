//
//  WDCardholderAuthenticationStatus.h
//  WDeCom
//
//  Created by Sedlak, Stefan on 11/20/15.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

typedef NS_ENUM(NSUInteger, WDCardholderAuthenticationStatus) {
    WDCardholderAuthenticationStatusUndefined = 0,
    
    WDCardholderAuthenticationStatusY,
    WDCardholderAuthenticationStatusA,
    WDCardholderAuthenticationStatusU,
    WDCardholderAuthenticationStatusN,
    WDCardholderAuthenticationStatusE,
    
    WDCardholderAuthenticationStatusTotalNumber
};
