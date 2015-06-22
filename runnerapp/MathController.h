//
//  MathController.h
//  runnerapp
//
//  Created by Anastasiya on 5/18/15.
//  Copyright (c) 2015 GOGA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MathController : NSObject

+ (NSString *)stringifyDistance:(float)meters;
+ (NSString *)stringifySecondCount:(int)seconds usingLongFormat:(BOOL)longFormat;
+ (NSString *)stringifyAvgPaceFromDist:(float)meters overTime:(int)seconds;

+ (NSArray *)colorSegmentsForLocations:(NSArray *)locations;

@end
