//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSInspectorItem.h"

#import "MSArtboardPresetsViewControllerDelegate.h"
#import "MSEditArtboardPresetViewControllerDelegate.h"

@class MSArtboardPresetStore, MSArtboardPresetsViewController, NSButton, NSString;

@interface MSArtboardPresetInspectorItem : MSInspectorItem <MSArtboardPresetsViewControllerDelegate, MSEditArtboardPresetViewControllerDelegate>
{
    MSArtboardPresetsViewController *_presetsViewController;
    MSArtboardPresetStore *_presetStore;
    NSButton *_presetButton;
}

+ (id)filterSelection:(id)arg1;
@property(retain, nonatomic) NSButton *presetButton; // @synthesize presetButton=_presetButton;
@property(readonly, nonatomic) MSArtboardPresetStore *presetStore; // @synthesize presetStore=_presetStore;
@property(retain, nonatomic) MSArtboardPresetsViewController *presetsViewController; // @synthesize presetsViewController=_presetsViewController;
- (void).cxx_destruct;
- (void)dismissAllPresentedViewControllers;
- (void)viewWillDisappear;
- (void)dismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1 animator:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)editArtboardPresetViewController:(id)arg1 savePreset:(id)arg2;
- (void)showCustomPresetSheet:(id)arg1;
- (void)artboardPresetsViewController:(id)arg1 didSelectOrientation:(long long)arg2;
- (void)artboardPresetsViewController:(id)arg1 didSelectPreset:(id)arg2;
- (id)orientationOfArtboard:(id)arg1;
- (id)orientation;
- (void)didChangeOrientation:(long long)arg1;
- (void)toggleOrientation:(id)arg1;
- (void)applyOrientation:(long long)arg1;
- (void)applyPreset:(id)arg1;
- (id)selectedPreset;
- (void)refreshPresetButtonAndPopover;
- (void)showPresets:(id)arg1;
- (void)updateDisplayedValues;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

