//
//  EReaderToolBar.h
//  Examda
//
//  Created by Bobby' on 16/2/19.
//  Copyright © 2016年 Bobby. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EReaderToolBar;

typedef NS_ENUM(NSUInteger, EReaderToolBarAction) {
    EReaderToolBarActionMenu,
    EReaderToolBarActionMark,
    EReaderToolBarActionFont,
};

@protocol EReaderToolBarDelegate <NSObject>

- (void)readerToolBar:(EReaderToolBar *)readerToolBar didClickedAction:(EReaderToolBarAction)action;

- (void)readerToolBar:(EReaderToolBar *)readerToolBar didSliderToPage:(NSInteger)page;

- (void)readerToolBar:(EReaderToolBar *)readerToolBar didSliderToProgress:(CGFloat)progress;

@end

@interface EReaderToolBar : UIView
@property (nonatomic, assign) NSInteger curPage;
@property (nonatomic, assign) NSInteger totalPage;

@property (nonatomic, weak) id<EReaderToolBarDelegate> delegate;

- (void)showSliderPogress;

@end
