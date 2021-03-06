//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface MSPluginsPreferenceIconView : NSView
{
    NSImage *_icon;
    NSImage *_preview;
}

@property(retain, nonatomic) NSImage *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (struct CGRect)previewFrame;
- (id)contentPath;
- (id)centeredThumbFromImage:(id)arg1;
- (void)generatePreview;
@property(readonly, nonatomic) NSImage *placeHolderImage;
- (void)drawRect:(struct CGRect)arg1;

@end

