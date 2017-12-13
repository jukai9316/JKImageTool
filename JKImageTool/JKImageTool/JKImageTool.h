//
//  JKImageTool.h
//  JKImageTool
//
//  Created by 陶晨麟 on 2017/12/13.
//  Copyright © 2017年 Fourthwall. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//图片本地化存储
@interface JKImageTool : NSObject

//将图片保存到本地
+ (void)SaveImageToLocal:(UIImage*)image Keys:(NSString*)key;

//本地是否有相关图片
+ (BOOL)LocalHaveImage:(NSString*)key;

//从本地获取图片
+ (UIImage*)GetImageFromLocal:(NSString*)key;

//将图片从本地删除
+ (void)RemoveImageToLocalKeys:(NSString*)key;


@end
