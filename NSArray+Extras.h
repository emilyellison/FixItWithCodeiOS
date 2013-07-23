//
//  NSArray+Extras.h
//  FixItWithCode
//
//  Created by Emily on 7/23/13.
//  Copyright (c) 2013 Fix It With Code. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Extras)

typedef NSInteger (^compareBlock)(id a, id b);

-(NSUInteger)indexForInsertingObject:(id)anObject sortedUsingBlock:(compareBlock)compare;

@end
