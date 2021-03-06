//
//  MMTabDragView.h
//  MMTabBarView
//
//  Created by Kent Sutherland on 6/17/07.
//  Copyright 2007 Kent Sutherland. All rights reserved.
//

#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface MMTabDragView : NSView

@property (assign) CGFloat alpha;
@property (strong) NSImage *image;
@property (strong) NSImage *alternateImage;

@end

NS_ASSUME_NONNULL_END
