//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSColor, MSImmutableColor;

@protocol MSColorConverter <NSObject>
- (BOOL)shouldConvertImmutableColor:(MSImmutableColor *)arg1;
- (BOOL)shouldConvertColor:(MSColor *)arg1;
- (MSImmutableColor *)convertImmutableColor:(MSImmutableColor *)arg1;
- (MSColor *)convertColor:(MSColor *)arg1;
@end

