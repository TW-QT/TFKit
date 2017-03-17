//
//  UIImage+TFExtension.h
//
//  Created by Donkey-Tao on 15/6/8.
//  Copyright © 2015年 http://taofei.me All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (TFExtension)

-(UIImage *)circleImage;

+ (UIImage *)createNonInterpolatedUIImageFormCIImage:(CIImage *)image withSize:(CGFloat) size;

@end
