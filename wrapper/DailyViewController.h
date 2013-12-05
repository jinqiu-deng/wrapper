//
//  DailyViewController.h
//  wrapper
//
//  Created by xcode-dev on 11/22/13.
//  Copyright (c) 2013 MusicKids. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Schedule.h"

@interface DailyViewController : UIViewController

- (id)initWithDay:(NSInteger)day weekday:(NSInteger)weekday
         month:(NSInteger)month year:(NSInteger)year;
@end
