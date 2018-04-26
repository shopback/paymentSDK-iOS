//
//  NSString+sha256.m
//  iPay
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2015 Wirecard AG. All rights reserved.
//

#import "NSString+Utils.h"
#import <CommonCrypto/CommonHMAC.h>

@implementation NSString (HMAC)

- (nullable NSString *)HMAC256WithKey:(nonnull NSString *)key {
    if (!key) {
        return nil;
    }
    
    NSData *rawData = [self dataUsingEncoding:NSUTF8StringEncoding];
    NSData *rawKey  = [key  dataUsingEncoding:NSUTF8StringEncoding];
    
    NSMutableData *hash = [NSMutableData dataWithLength:CC_SHA256_DIGEST_LENGTH ];
    CCHmac(kCCHmacAlgSHA256, rawKey.bytes, rawKey.length, rawData.bytes, rawData.length, hash.mutableBytes);

    NSData *rawHMAC = [NSData dataWithData:hash];
    
    NSString *HMAC  = [rawHMAC base64EncodedStringWithOptions:0];
    return HMAC;
}

@end


