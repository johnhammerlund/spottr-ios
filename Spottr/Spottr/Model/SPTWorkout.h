//
//  SPTWorkout.h
//  Spottr
//
//  Created by John Hammerlund on 8/9/14.
//  Copyright (c) 2014 Spottr. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 THIS INTERFACE IS PRONE TO CHANGE
 */

@class PFObject;
@interface SPTWorkout : NSObject

- (PFObject *)parseObject;
+ (SPTWorkout *)workoutWithParseObject:(PFObject *)parseObject;
- (void)saveWithCompletion:(SPTParseFetchBlock)completion;
- (void)joinWithCompleteion:(SPTParseFetchBlock)completion;

@property (nonatomic, copy) NSDate *workoutDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSUInteger capacity;
@property (nonatomic, assign) NSUInteger numUsersJoined;

- (void)fetchCreatedByWithCompletion:(SPTParseFetchBlock)completion;
- (void)fetchJoinedUsersWithCompletion:(SPTParseFetchBlock)completion;

@end