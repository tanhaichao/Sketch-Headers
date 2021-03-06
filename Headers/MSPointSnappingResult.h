//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface MSPointSnappingResult : NSObject <NSCopying>
{
    NSArray *_guides;
    unsigned long long _snappedAxes;
    struct CGPoint _point;
}

+ (id)snappingResultWithPoint:(struct CGPoint)arg1 axes:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long snappedAxes; // @synthesize snappedAxes=_snappedAxes;
@property(readonly, copy, nonatomic) NSArray *guides; // @synthesize guides=_guides;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawAtZoomValue:(double)arg1;
- (id)initWithPoint:(struct CGPoint)arg1 guides:(id)arg2 snappedAxes:(unsigned long long)arg3;

@end

