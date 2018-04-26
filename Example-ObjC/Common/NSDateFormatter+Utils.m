//
//  NSDateFormatter+Utils.m
//  iPay
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2015 Wirecard AG. All rights reserved.
//

#import "NSDateFormatter+Utils.h"

@implementation NSDateFormatter (Utils)

+ (NSDateFormatter *)timestampDateFormatter {
    static dispatch_once_t onceToken;
    static NSDateFormatter *formatter;
    dispatch_once(&onceToken, ^{
        formatter = [NSDateFormatter new];
        NSLocale *enUSPOSIXLocale = [NSLocale localeWithLocaleIdentifier:@"en_US_POSIX"];
        formatter.locale = enUSPOSIXLocale;
        formatter.dateFormat = @"yyyy-MM-dd'T'HH:mm:ssZZZZZ";
        formatter.timeZone = [NSTimeZone timeZoneWithName:@"UTC"];
    });
    return [formatter copy];
}

@end
