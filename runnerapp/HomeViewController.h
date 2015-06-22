//
//  HomeViewController.h
//  
//
//  Created by Anastasiya on 5/18/15.
//
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "NewRunViewController.h"

@interface HomeViewController : UIViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
