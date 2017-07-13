//
//  YZXCalendarCommonMethods.h
//  YZXCalendar
//
//  Created by 尹星 on 2017/6/28.
//  Copyright © 2017年 尹星. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class YZXCalendarModel;

typedef NS_ENUM(NSUInteger, WWTDateWithTodayType) {
    WWTDateEqualToToday = 1,//当天
    WWTDateEarlierThanToday,//早于当天
    WWTDateLaterThanToday,//晚于当天
};

@interface YZXCalendarHelper : NSObject

- (NSCalendar *)calendar;

- (NSDateFormatter *)formatter;

+ (NSDateFormatter *)createFormatterWithDateFormat:(NSString *)dateFormat;

- (BOOL)date:(NSDate *)date isTheSameDateThan:(NSDate *)otherDate;

+ (instancetype)helper;

- (WWTDateWithTodayType)determineWhetherForTodayWithIndexPaht:(NSIndexPath *)indexPath model:(YZXCalendarModel *)model;

@end
