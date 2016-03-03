//
//  TReaderViewController.h
//  TBookReader
//
//  Created by Bobby' on 16/2/19.
//  Copyright © 2016年 Bobby. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TReaderPager;
@class TReaderChapter;

@interface TReaderTextController : UIViewController
@property (nonatomic, strong) TReaderChapter *readerChapter;
@property (nonatomic, strong) TReaderPager *readerPager;
@property (nonatomic, assign) NSUInteger totalPage;

// 获取当前图文label 的大小
+ (CGSize)renderSizeWithFrame:(CGRect)frame;

@end
