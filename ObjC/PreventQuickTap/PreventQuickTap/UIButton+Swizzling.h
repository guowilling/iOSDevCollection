//
//  UIButton+Swizzling.h
//  PreventQuickTap
//
//  Created by 郭伟林 on 17/1/18.
//  Copyright © 2017年 SR. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Swizzling)

@property (nonatomic, assign) NSTimeInterval eventInterval;

@end
