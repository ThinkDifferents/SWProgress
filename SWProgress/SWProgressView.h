//
//  SWProgressView.h
//  天天特价
//
//  Created by shiwei on 2017/2/11.
//  Copyright © 2017年 shiwei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SWProgressView : UIView

@property (strong,nonatomic) UIColor *progressBackGroundColor;//背景色
@property (strong,nonatomic) UIColor *progressTintColor; //进度条颜色
@property (assign,nonatomic) CGFloat progressValue;   //进度条进度的值
@property (assign,nonatomic) NSInteger progressCornerRadius;//进度条圆角
@property (assign,nonatomic) NSInteger progressBorderWidth;//进度条边宽度


+ (instancetype)initProgressView;  //初始化构造方法

@end
