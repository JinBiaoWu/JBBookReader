//
//  TReaderPager.h
//  TBookReader
//
//  Created by Bobby' on 16/2/19.
//  Copyright © 2016年 Bobby. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TReaderPager : NSObject

@property (nonatomic, strong) NSAttributedString *attString; // 本页属性文本
@property (nonatomic, assign) NSRange pageRange;   // 本页范围
@property (nonatomic, assign) NSInteger pageIndex; // 本页下标
@end
