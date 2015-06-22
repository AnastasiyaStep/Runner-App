//
//  PastRunsController.m
//  runnerapp
//
//  Created by Anastasiya on 6/1/15.
//  Copyright (c) 2015 GOGA. All rights reserved.
//

#import "PastRunsController.h"
#import "MathController.h"
#import "Run.h"
#import "Location.h"

@interface PastRunsController ()

@property (nonatomic, strong) Run *run;
@property (nonatomic, weak) IBOutlet UILabel *distanceLabel;

@end

@implementation PastRunsController

- (void)viewDidLoad {
    [super viewDidLoad];
    int count = self.runs.count;
    for (Run *run in self.runs) {
        //self.distanceLabel.text = [MathController stringifyDistance:run.distance.floatValue];
        //add to table view controller
        if (run.distance.floatValue > 0) {
            NSLog(@"distance = %f", run.distance.floatValue);
            NSLog(@"t = %f", run.duration.floatValue/60);
        } else {
            count--;
        }
    }
    NSLog(@"%d", count);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end