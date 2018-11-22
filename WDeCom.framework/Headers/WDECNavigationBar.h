//
//  WDECHeaderView.h
//  WDeCom
//
//  Created by Vrana, Jozef on 04/06/2018.
//  Copyright © 2018 Wirecard Technologies GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDECView.h"

typedef NS_ENUM(NSUInteger, WDECNavigationBarStyle) {
    WDECNavigationBarStyleBig = 0,
    WDECNavigationBarStyleSmall,
};

@interface WDECNavigationBar : WDECView

@property (nonatomic) WDECNavigationBarStyle barStyle UI_APPEARANCE_SELECTOR;
@end
