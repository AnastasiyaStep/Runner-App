//
//  DetailViewController.h
//  runnerapp
//
//  Created by Anastasiya on 5/18/15.
//  Copyright (c) 2015 GOGA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

