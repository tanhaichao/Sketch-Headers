//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSEventHandler.h"

#import "MSFlowMenuBuilderTarget.h"

@class MSArtboardGroup, MSLayerArray;

@interface MSFlowEventHandler : MSEventHandler <MSFlowMenuBuilderTarget>
{
    BOOL _didDragMouse;
    MSLayerArray *_layers;
    unsigned long long _hoverType;
    MSArtboardGroup *_targetArtboard;
    struct CGPoint _lastMouse;
}

@property(nonatomic) BOOL didDragMouse; // @synthesize didDragMouse=_didDragMouse;
@property(nonatomic) struct CGPoint lastMouse; // @synthesize lastMouse=_lastMouse;
@property(retain, nonatomic) MSArtboardGroup *targetArtboard; // @synthesize targetArtboard=_targetArtboard;
@property(nonatomic) unsigned long long hoverType; // @synthesize hoverType=_hoverType;
@property(retain, nonatomic) MSLayerArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (BOOL)mayShowResizingInspectorView;
- (id)findTargetLayerForMouse:(struct CGPoint)arg1;
- (struct CGPoint)positionOfOtherPageImageIndicatorForArtboard:(id)arg1;
- (id)parentArtboards;
- (void)flowTargetAction:(id)arg1;
- (void)showOtherPageMenuForLayer:(id)arg1;
- (void)attachWireToTarget;
- (void)moveWireToMouse:(struct CGPoint)arg1;
- (void)drawAreaIndicatorsWithImageNamed:(id)arg1 atOffset:(double)arg2 atEdge:(unsigned long long)arg3;
- (void)drawOtherPageAreaIndicator;
- (void)drawBackAreaIndicator;
- (void)drawFlowPath:(id)arg1 fromLayer:(id)arg2 ofType:(unsigned long long)arg3 context:(id)arg4;
- (void)drawConnectionToMouseInContext:(id)arg1;
- (void)drawConnectionToArtboardInContext:(id)arg1;
- (void)drawConnectionToOtherPageInContext:(id)arg1;
- (void)drawConnectionToBackArrowsInContext:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 context:(id)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)findMouseAndDisconnectFromTarget;
- (void)handlerDidLoseFocus;
- (void)handlerGotFocus;

@end

