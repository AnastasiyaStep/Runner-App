//
//  BadgeController.h
//  runnerapp
//
//  Created by Anastasiya on 5/20/15.
//  Copyright (c) 2015 GOGA. All rights reserved.
//

#import <Foundation/Foundation.h>

extern float const silverMultiplier;
extern float const goldMultiplier;

@class Badge;

@interface BadgeController : NSObject

+ (BadgeController *)defaultController;
- (NSArray *)earnStatusesForRuns:(NSArray *)runArray;
- (Badge *)bestBadgeForDistance:(float)distance;
- (Badge *)nextBadgeForDistance:(float)distance;

@end