//
//  BIDUser.h
//  FateApp
//
//  Created by fengxi on 14-11-28.
//  Copyright (c) 2014年 fengxi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BIDUser : NSObject
@property (strong,nonatomic)NSString *username;
@property (strong,nonatomic)NSNumber *user_id;
@property(strong,nonatomic) NSString *Email;
@property(strong,nonatomic)NSString *PhotoUrl;
@property (strong,nonatomic)NSString *Sex;
@property (nonatomic,strong)NSString *Role;
@end
