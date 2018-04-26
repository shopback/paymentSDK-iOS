//
//  NSString+sha256.h
//  iPay
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2015 Wirecard AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SHA)

- (nullable NSString *)HMAC256WithKey:(nonnull NSString *)key;

@end
