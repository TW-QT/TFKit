//
//  NSString+TFExtension.h
//  TFKit
//
//  Created by Donkey-Tao on 14-5-10.
//  Copyright (c) 2014年 http://taofei.me All rights reserved.
//
//  emailto: taofei0610@gmail.com


#import <UIKit/UIKit.h>


@interface NSString (TFExtension)

//-------------------------------------------- 扩展 ----------------------------------------------------

/**
 *  获得UUID
 *  @return 返回uuid
 */
+ (NSString *)tf_UUID;


/*
 计算字符串高度
 
 */
- (CGSize)tf_sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize ;




/**
 *  产生MD5
 *  @return MD5
 */
- (NSString *)tf_MD5;


/**
 *  检验字符串是否有效
 *  @return 若非空且不等于@“”，则返回YES，否则，返回NO
 */
- (BOOL)tf_isEmptyString;



//----------------------------------------- 正则表达式相关  ---------------------------------------------

/**
 判断用户输入的密码是否符合规范，符合规范的密码要求：
 1. 长度大于6位
 2. 密码中必须同时包含数字和字母
 
 @return 是否符合规范
 */
-(BOOL)tf_judgePassWordLegal;

/** 邮箱验证 */
- (BOOL)tf_isValidEmail;

/** 手机号码验证 */
- (BOOL)tf_isValidPhoneNum;

/** 车牌号验证 */
- (BOOL)tf_isValidCarNo;

/** 网址验证 */
- (BOOL)tf_isValidUrl;

/** 邮政编码 */
- (BOOL)tf_isValidPostalcode;

/** 纯汉字 */
- (BOOL)tf_isValidChinese;



/**
 @brief     是否符合IP格式，xxx.xxx.xxx.xxx
 */
- (BOOL)tf_isValidIP;

/** 身份证验证 refer to http://blog.csdn.net/afyzgh/article/details/16965107*/
- (BOOL)tf_isValidIdCardNum;

/** 
 @brief     是否符合最小长度、最长长度，是否包含中文,首字母是否可以为数字
 @param     minLenth 账号最小长度
 @param     maxLenth 账号最长长度
 @param     containChinese 是否包含中文
 @param     firstCannotBeDigtal 首字母不能为数字
 @return    正则验证成功返回YES, 否则返回NO
 */
- (BOOL)tf_isValidWithMinLenth:(NSInteger)minLenth
                   maxLenth:(NSInteger)maxLenth
             containChinese:(BOOL)containChinese
        firstCannotBeDigtal:(BOOL)firstCannotBeDigtal;

/**
 @brief     是否符合最小长度、最长长度，是否包含中文,数字，字母，其他字符，首字母是否可以为数字
 @param     minLenth 账号最小长度
 @param     maxLenth 账号最长长度
 @param     containChinese 是否包含中文
 @param     containDigtal   包含数字
 @param     containLetter   包含字母
 @param     containOtherCharacter   其他字符
 @param     firstCannotBeDigtal 首字母不能为数字
 @return    正则验证成功返回YES, 否则返回NO
 */
- (BOOL)tf_isValidWithMinLenth:(NSInteger)minLenth
                   maxLenth:(NSInteger)maxLenth
             containChinese:(BOOL)containChinese
              containDigtal:(BOOL)containDigtal
              containLetter:(BOOL)containLetter
      containOtherCharacter:(NSString *)containOtherCharacter
        firstCannotBeDigtal:(BOOL)firstCannotBeDigtal;

/** 去掉两端空格和换行符 */
- (NSString *)tf_stringByTrimmingBlank;

/** 去掉html格式 */
- (NSString *)tf_removeHtmlFormat;

/** 工商税号 */
- (BOOL)tf_isValidTaxNo;

@end
