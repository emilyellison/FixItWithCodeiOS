//
//  FCDetailViewController.h
//  FixItWithCode
//
//  Created by Emily on 7/23/13.
//  Copyright (c) 2013 Fix It With Code. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FCDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
