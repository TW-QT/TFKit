//
//  UIBarButtonItem+TFExtension.h
//
//  Created by Donkey-Tao on 15/5/29.
//  Copyright © 2015年 http://taofei.me All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (TFExtension)

+(instancetype)tf_itemWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action;

@end
