//
//  HomeViewController.m
//  
//
//  Created by Anastasiya on 5/18/15.
//
//

#import "HomeViewController.h"
#import "BadgesTableViewController.h"
#import "BadgeController.h"
#import "PastRunsController.h"

@interface HomeViewController ()

@property (strong, nonatomic) NSArray *runArray;

@end

@implementation HomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    UIViewController *nextController = [segue destinationViewController];
    if ([nextController isKindOfClass:[NewRunViewController class]]) {
        ((NewRunViewController *) nextController).managedObjectContext = self.managedObjectContext;
    } else if ([nextController isKindOfClass:[BadgesTableViewController class]]) {
        ((BadgesTableViewController *)nextController).earnStatusArray = [[BadgeController defaultController] earnStatusesForRuns:self.runArray];
    } else if ([nextController isKindOfClass:[PastRunsController class]]) {
        ((PastRunsController *)nextController).runs = self.runArray;
    }
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    NSFetchRequest *fetchRequest = [[NSFetchRequest alloc] init];
    NSEntityDescription *entity = [NSEntityDescription entityForName:@"Run" inManagedObjectContext:self.managedObjectContext];
    [fetchRequest setEntity:entity];
    
    NSSortDescriptor *sortDescriptor = [[NSSortDescriptor alloc] initWithKey:@"timestamp" ascending:NO];
    [fetchRequest setSortDescriptors:@[sortDescriptor]];
    
    self.runArray = [self.managedObjectContext executeFetchRequest:fetchRequest error:nil];
}

@end