//
//  TLUserHelper.h
//  TLChat
//
//  Created by 李伯坤 on 16/2/6.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TLUser;
@interface TLUserHelper : NSObject

@property (nonatomic, strong) TLUser *user;

+ (TLUserHelper *) sharedHelper;

@end
