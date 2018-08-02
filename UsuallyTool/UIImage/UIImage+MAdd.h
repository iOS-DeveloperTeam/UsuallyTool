//
//  UIImage+MAdd.h
//  Demo_268EDU
//
//  Created by yizhilu on 2017/10/26.
//  Copyright © 2017年 Magic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MAdd)

/** 圆角 */
- (UIImage *)addCornerWithRadius:(CGFloat)radius;

/** 圆形图片 */
+ (UIImage *)nn_GetRoundImagewithImage:(UIImage *)image;

/** 根据颜色生成图片 */
- (UIImage *)nn_imageWithColor:(UIColor *)color;

/** 带有阴影效果的图片 */
- (UIImage *)nn_imageWithShadowColor:(UIColor *)color offset:(CGSize)offset blur:(CGFloat)blur;

/** 截屏 */
+ (instancetype)nn_snapshotCurrentScreen;

@end
