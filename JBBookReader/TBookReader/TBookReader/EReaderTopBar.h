//
//  EReaderTopBar.h
//  Examda
//
//  Created by Bobby' on 16/2/19.
//  Copyright © 2016年 Bobby. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EReaderTopBar;

typedef NS_ENUM(NSUInteger, EReaderTopBarAction) {
    EReaderTopBarActionBack,
    EReaderTopBarActionBuy,
    EReaderTopBarActionConsult,
    EReaderTopBarActionMark
};

@protocol EReaderTopBarDelegate  <NSObject>

- (void)readerTopBar:(EReaderTopBar *)readerTopBar didClickedAction:(EReaderTopBarAction)action;

@end

@interface EReaderTopBar : UIView

@property (weak, nonatomic) IBOutlet UIButton *markBtn;

@property (nonatomic, weak) id<EReaderTopBarDelegate> delegate;

@end
