//
//  BadgeEarnStatus.h
//  runnerapp
//
//  Created by Anastasiya on 5/21/15.
//  Copyright (c) 2015 GOGA. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Badge;
@class Run;

@interface BadgeEarnStatus : NSObject

@property (strong, nonatomic) Badge *badge;
@property (strong, nonatomic) Run *earnRun;
@property (strong, nonatomic) Run *silverRun;
@property (strong, nonatomic) Run *goldenRun;
@property (strong, nonatomic) Run *bestRun;

@end
