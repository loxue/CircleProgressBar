//
//  CircleProgressBar.h
//  CircleProgressBar
//
//  Created by Borago on 16/7/20.
//  Copyright © 2016年 Borago. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MACRO.h"

#pragma mark - 进度值回调方法
typedef NSString*(^StringGenerationBlock)(CGFloat progress);
typedef NSAttributedString*(^AttributedStringGenerationBlock)(CGFloat progress);

@interface CircleProgressBar : UIView

@property (nonatomic) IBInspectable CGFloat progressBarWidth;           // @brief 进度宽度
@property (nonatomic) IBInspectable UIColor *progressBarProgressColor;  // @brief 进度颜色
@property (nonatomic) IBInspectable UIColor *progressBarTrackColor;     // @brief 外环默认背景颜色
@property (nonatomic) IBInspectable CGFloat startAngle;                 // @brief 起始角度
@property (nonatomic) IBInspectable UIFont *hintTextFont;       // @brief 进度值字体
@property (nonatomic) IBInspectable UIColor *hintTextColor;     // @brief 进度值字体颜色


// @brief 当前圆弧进度 (Read-Only)
@property (nonatomic, readonly) IBInspectable CGFloat progress; // @brief 进度
@property (nonatomic, readonly) BOOL isAnimating;               // @brief 是否动画

/** 设置进度
 *
 *  @param 进度动画
 */
- (void)setProgress:(CGFloat)progress animated:(BOOL)animated;

/** 设置进度（添加默认时间）
 *
 *  @param 动画持续时间默认0.2s
 */
- (void)setProgress:(CGFloat)progress animated:(BOOL)animated duration:(CGFloat)duration;

/**
 *
 *  @param 停止动画
 */
- (void)stopAnimation;

@end



/**  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 
 * 工具类描述：
 
 *    @author Borago
 
 *    @time 2016-07-20 14:49:01
 
 *    @brief  欢迎大家提意见多多交流 本人github账号：SosoCrazy   QQ：240107867 谢谢！
 
 *   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 
 */
