//
//  RNChannelIO.h
//  RNExample
//
//  Created by Haeun Chung on 28/09/2018.
//  Copyright © 2018 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <ChannelIO/ChannelIO-Swift.h>
#import <React/RCTEventEmitter.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNChannelIO : NSObject <RCTBridgeModule>
@end

static NSString * const ON_CHANGE_BADGE = @"ChannelIO:Event:OnChangeBadge";
static NSString * const ON_RECEIVE_PUSH = @"ChannelIO:Event:OnReceivePush";
static NSString * const WILL_OPEN_MESSENGER = @"ChannelIO:Event:WillOpenMessenger";
static NSString * const WILL_CLOSE_MESSENGER = @"ChannelIO:Event:WillCloseMessenger";
static NSString * const ON_CLICK_CHAT_LINK = @"ChannelIO:Event:OnClickChatLink";

//@interface RNChannelEventEmitter: RCTEventEmitter <RCTBridgeModule, ChannelPluginDelegate>
//@end

NS_ASSUME_NONNULL_END

