//
//  BIDCommeMeathod.h
//  FateApp
//
//  Created by fengxi on 14-12-1.
//  Copyright (c) 2014年 fengxi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BIDCommeMeathod : NSObject

-(id)init;
+(NSString *)getUserIDByLocal;
+(NSString *)getuserName;
+(NSString *)GetJsonDate:(NSString *)string;
+(NSDate *)GetLocalTimeNow:(NSDate *)date;
+(NSDate *)GetLocalTimeNowFromstr:(NSString *)dateString;
+(NSString *)MakedatetoStr:(NSDate *)date;
+(NSString *)MakeJsonDate:(NSDate *)date;
+ (NSDate *)DateFromDotNetJSONString:(NSString *)string;
@end

