//
//  BadgesTableViewController.h
//  runnerapp
//
//  Created by Anastasiya on 5/25/15.
//  Copyright (c) 2015 GOGA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BadgesTableViewController : UITableViewController

@property (strong, nonatomic) NSArray *earnStatusArray;
@property (strong, nonatomic) UIColor *redColor;
@property (strong, nonatomic) UIColor *greenColor;
@property (strong, nonatomic) NSDateFormatter *dateFormatter;
@property (assign, nonatomic) CGAffineTransform transform;

@end