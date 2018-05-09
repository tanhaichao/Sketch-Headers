//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSLayer, MSLayerArray, MSPage, NSArray, NSNumberFormatter;

@interface MSLayerPositionDrawing : NSObject
{
    BOOL _isEnabled;
    MSLayer *_targetLayer;
    double _zoomValue;
    unsigned long long _modifierFlags;
    MSLayerArray *_selectedLayers;
    MSPage *_currentPage;
    NSArray *_hoverGuides;
    NSNumberFormatter *_numberFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(copy, nonatomic) NSArray *hoverGuides; // @synthesize hoverGuides=_hoverGuides;
@property(retain, nonatomic) MSPage *currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) MSLayerArray *selectedLayers; // @synthesize selectedLayers=_selectedLayers;
@property(nonatomic) unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) __weak MSLayer *targetLayer; // @synthesize targetLayer=_targetLayer;
- (void).cxx_destruct;
- (BOOL)isMeasuringDistance;
- (void)clear;
- (struct CGRect)rectForPositionDrawingForLayers:(id)arg1;
- (void)drawDistanceFromRect:(struct CGRect)arg1 toLargerRect:(struct CGRect)arg2;
- (void)drawDashLinesBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;
- (void)drawOutlineForRect:(struct CGRect)arg1;
- (void)drawDistanceFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (void)drawDistanceToGuidesWithZoom:(struct CGRect)arg1;
- (void)draw;

@end
