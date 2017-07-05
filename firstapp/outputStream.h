//
//  outputStream.h
//  firstapp
//
//  Created by yanli on 2017/7/3.
//  Copyright © 2017年 YY Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "encoder.h"


@interface OutputStream : NSObject <EncoderDataDelegate>

@property(nonatomic) NSFileHandle *fileHandle;

- (void)initFileManager;
- (void)destoryFileManager;

@end
