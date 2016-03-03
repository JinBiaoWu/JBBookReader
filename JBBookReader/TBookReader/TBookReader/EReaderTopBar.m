//
//  EReaderTopBar.m
//  Examda
//
//  Created by Bobby' on 16/2/19.
//  Copyright © 2016年 Bobby. All rights reserved.
//

#import "EReaderTopBar.h"

@implementation EReaderTopBar


//- (IBAction)buyBookAction:(id)sender {
//    if ([_delegate respondsToSelector:@selector(readerTopBar:didClickedAction:)]) {
//        [_delegate readerTopBar:self didClickedAction:EReaderTopBarActionBuy];
//    }
//}
//
//- (IBAction)consultBook:(id)sender {
//    if ([_delegate respondsToSelector:@selector(readerTopBar:didClickedAction:)]) {
//        [_delegate readerTopBar:self didClickedAction:EReaderTopBarActionConsult];
//    }
//}

- (IBAction)markBookAction:(UIButton *)sender {
    if ([_delegate respondsToSelector:@selector(readerTopBar:didClickedAction:)]) {
        [_delegate readerTopBar:self didClickedAction:EReaderTopBarActionMark];
        sender.selected = !sender.isSelected;
    }
}

- (IBAction)navBackAction:(id)sender {
    if ([_delegate respondsToSelector:@selector(readerTopBar:didClickedAction:)]) {
        [_delegate readerTopBar:self didClickedAction:EReaderTopBarActionBack];
    }
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
