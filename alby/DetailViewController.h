//
//  DetailViewController.h
//  alby
//
//  Created by Alberto Azevedo on 29/07/13.
//  Copyright (c) 2013 Alberto Azevedo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
