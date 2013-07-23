//
//  Post.m
//  FixItWithCode
//
//  Created by Emily on 7/23/13.
//  Copyright (c) 2013 Fix It With Code. All rights reserved.
//

#import "Post.h"

@implementation Post

@synthesize articleTitle = _articleTitle;
@synthesize articleUrl = _articleUrl;
@synthesize articleDate = _articleDate;

- (id)initWithArticleTitle:(NSString*)articleTitle articleUrl:(NSString*)articleUrl articleDate:(NSDate*)articleDate
{
    if ((self = [super init])) {
        _articleTitle = [articleTitle copy];
        _articleUrl = [articleUrl copy];
        _articleDate = [articleDate copy];
    }
    return self;
}

@end
