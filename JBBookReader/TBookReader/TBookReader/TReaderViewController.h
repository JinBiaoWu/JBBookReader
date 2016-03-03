//
//  TReaderPageViewController.h
//  TBookReader
//
//  Created by Bobby' on 16/2/19.
//  Copyright © 2016年 Bobby. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, TReaderTransitionStyle) {
    TReaderTransitionStylePageCur,
    TReaderTransitionStyleScroll,
};

@interface TReaderViewController : UIViewController

@property (nonatomic, assign) TReaderTransitionStyle style;// 翻页样式

@end
