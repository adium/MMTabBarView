//
//  MMOverflowPopUpButton.h
//  MMTabBarView
//
//  Created by John Pannell on 11/4/05.
//  Copyright 2005 Positive Spin Media. All rights reserved.
//

#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Cocoa;
@import QuartzCore;
#else
#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>
#endif

NS_ASSUME_NONNULL_BEGIN

typedef void (^MMCellBezelDrawingBlock)(NSCell *cell, NSRect frame, NSView *controlView);

@interface MMOverflowPopUpButton : NSPopUpButton 

/**
 *  Second image
 */
@property (nullable, strong) NSImage *secondImage;

/**
 *  Block to be used for drawing the bezel
 */
@property (nullable, copy) MMCellBezelDrawingBlock bezelDrawingBlock;

@end

NS_ASSUME_NONNULL_END
