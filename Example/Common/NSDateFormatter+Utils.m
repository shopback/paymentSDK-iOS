//
//  NSDateFormatter+Utils.m
//  iPay
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2015 Wirecard AG. All rights reserved.
//

#import "NSDateFormatter+Utils.h"

@implementation NSDateFormatter (Utils)

+ (NSDateFormatter *)requestTimestampDateFormatter
{
    static dispatch_once_t onceToken;
    static NSDateFormatter *formatter;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        [formatter setDateFormat:@"yyyyMMddHHmmss"];
        [formatter setTimeZone:[NSTimeZone timeZoneWithName:@"UTC"]];
    });
    return formatter;
}

@end
