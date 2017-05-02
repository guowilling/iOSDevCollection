//
//  NSDate+Extension.h
//  SRCategories
//
//  Created by 郭伟林 on 16/12/5.
//  Copyright © 2016年 SR. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Extension)

- (BOOL)isToday;

- (BOOL)isYesterday;

- (BOOL)isThisYear;

+ (NSString *)createdDateWithTimeInterval:(NSTimeInterval)timeInterval;

+ (NSString *)weekdayFromDate:(NSDate *)date;

@end
