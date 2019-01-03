//
//  UCPingService.h
//  PingDemo
//
//  Created by ethan on 06/08/2018.
//  Copyright © 2018 ucloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UCPing.h"
#import "UPingModel.h"

@class UCPingService;

@protocol UCPingServiceDelegate <NSObject>

@optional

- (void)pingResultWithUCPingService:(UCPingService *)ucPingService pingResult:(UReportPingModel *)uReportPingModel;
- (void)pingFinishedWithUCPingService:(UCPingService *)ucPingService;

@end

@interface UCPingService : NSObject

@property (nonatomic,strong) id<UCPingServiceDelegate> delegate;


+ (instancetype)shareInstance;
- (void)startPingAddressList:(NSArray *)addressList;

- (void)uStopPing;
- (BOOL)uIsPing;

@end
