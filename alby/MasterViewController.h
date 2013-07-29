//
//  MasterViewController.h
//  alby
//
//  Created by Alberto Azevedo on 29/07/13.
//  Copyright (c) 2013 Alberto Azevedo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
