//
//  BNRennServiceDelegate.h
//  BirthdayNotification
//
//  Created by Liu Weilong on 28/8/14.
//  Copyright (c) 2014 Liu Weilong. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BNRennServiceDelegate <NSObject>

@required

- (void)loginSuccess;
- (void)logOutSuccess;
- (void)dataQueryingStarted;
- (void)dataQueryingFinished;
- (void)dataQueryingFailed;

@end
