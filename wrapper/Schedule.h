//
//  Schedule.h
//  wrapper
//
//  Created by Jinqiu Deng on 1/19/14.
//  Copyright (c) 2014 MusicKids. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Course.h"

@interface Schedule : NSObject

+ (void)addCourse:(Course*)course;

+ (Course*)courseOfIndex:(NSInteger)index;

+ (Course*)courseOfId:(NSNumber*)courseId;

+ (NSInteger)coursesNum;

+ (void)clearSchedule;

+ (void)addScheduleForCourse:(NSNumber*)courseId onYear:(NSInteger)year month:(NSInteger)month andDay:(NSInteger)day;

+ (NSMutableArray*)coursesOnYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

+ (BOOL)hasCourseOnYear:(NSInteger)year month:(NSInteger)month;

+ (BOOL)hasCourseOnYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;

@end
