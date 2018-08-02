///
///  UIImage+CZ.h
///
///  Created by Vincent_Guo on 14-6-16.
///  Copyright (c) 2014年 vgios. All rights reserved.
///

#import <UIKit/UIKit.h>

@interface UIImage (CZ)

+ (CGSize)getImageSizeWithURL:(id)URL;

- (UIImage*)imageAddCornerWithRadius:(CGFloat)radius andSize:(CGSize)size;

/**
 *  返回一张自由拉伸的图片
 */
+ (UIImage *)resizedImageWithName:(NSString *)name;

/**
 *  返回拉伸的图片
 */
+ (UIImage *)resizedImageWithName:(NSString *)name left:(CGFloat)left top:(CGFloat)top;


+ (instancetype)circleImageWithName:(NSString *)name borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

+ (instancetype)circleImageWithImage:(UIImage *)image borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

+(UIImage *)imageFromMainBundleWithName:(NSString *)name;


/** UIImage * 图片切圆, center中心点  radius 半径 */
- (CAShapeLayer *)circleImageWithImage:(UIImageView *)image center:(CGPoint)center radius:(CGFloat)radius;
@end
