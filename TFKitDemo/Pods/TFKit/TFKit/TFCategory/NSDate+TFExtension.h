//
//  NSDate+TFExtension.h
//
//  Created by Donnkey-Tao on 15/6/1.
//  Copyright © 2015年 http://taofei.me All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (TFExtension)


/**
 *比较from和self的时间差
 */
-(NSDateComponents *)tf_deltaFrom:(NSDate *)from;


/**
 *判断是否是今年
 */
-(BOOL)tf_isThisYear;



/**
 *判断是否是今天
 */
-(BOOL)tf_isToday;



/**
 *判断是否是昨天
 */
-(BOOL)tf_isYesterday;

@end
