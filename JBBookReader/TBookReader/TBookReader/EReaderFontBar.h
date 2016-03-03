//
//  EReaderFontBar.h
//  Examda
//
//  Created by Bobby' on 16/2/19.
//  Copyright © 2016年 Bobby. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EReaderFontBar;

@protocol EReaderFontBarDelegate <NSObject>

- (void)readerFontBar:(EReaderFontBar *)readerFontBar changeReaderFont:(BOOL)increaseSize;

- (void)readerFontBar:(EReaderFontBar *)readerFontBar changeReaderTheme:(NSInteger)readerTheme;

@end

@interface EReaderFontBar : UIView

@property (nonatomic, weak) id<EReaderFontBarDelegate> delegate;

@end
