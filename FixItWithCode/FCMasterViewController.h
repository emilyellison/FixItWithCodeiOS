//
//  FCMasterViewController.h
//  FixItWithCode
//
//  Created by Emily on 7/23/13.
//  Copyright (c) 2013 Fix It With Code. All rights reserved.
//

#import <UIKit/UIKit.h>

NSMutableArray *_allPosts;

@interface FCMasterViewController : UITableViewController

    @property (retain) NSMutableArray *allPosts;
    @property (retain) NSOperationQueue *queue;
    @property (retain) NSArray *feeds;

@end

