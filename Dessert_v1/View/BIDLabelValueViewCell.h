//
//  BIDLabelValueViewCell.h
//  Dessert_v1
//
//  Created by fengxi on 15-1-6.
//  Copyright (c) 2015年 KeithMorning. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDLabelValueViewCell : UITableViewCell
-(void)setCellTile:(NSString *)title setCellValue:(NSString *)value;
+(CGFloat)rowHeight;
@end
