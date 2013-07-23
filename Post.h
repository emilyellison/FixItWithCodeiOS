//
//  Post.h
//  FixItWithCode
//
//  Created by Emily on 7/23/13.
//  Copyright (c) 2013 Fix It With Code. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Post : NSObject {
    NSString *_articleTitle;
    NSString *_articleUrl;
    NSDate *_articleDate;
}

@property (copy) NSString *articleTitle;
@property (copy) NSString *articleUrl;
@property (copy) NSDate *articleDate;

- (id)initWithArticleTitle:(NSString*)articleTitle articleUrl:(NSString*)articleUrl articleDate:(NSDate*)articleDate;

@end
