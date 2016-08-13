//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, WAWeatherCityViewLayoutOptions;

@interface WACityDetailsView : UIView
{
    NSArray *_titleLabels;
    NSArray *_valueLabels;
    double _lineHeight;
    unsigned long long _lastDetailToShow;
    WAWeatherCityViewLayoutOptions *_layoutOptions;
}

+ (double)defaultLineHeight;
+ (id)_font;
@property(retain, nonatomic) WAWeatherCityViewLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic) unsigned long long lastDetailToShow; // @synthesize lastDetailToShow=_lastDetailToShow;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_rightLabelForDetail:(unsigned long long)arg1;
- (id)_leftLabelForDetail:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)_baselineOffsetForDetailLabel:(unsigned long long)arg1;
- (double)_interGroupPadding;
- (double)_lastBaselineToBottomPadding;
- (double)_topToFirstBaselinePadding;
- (void)clearDetailsText;
- (void)_setTitle:(id)arg1 forDetail:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 attributedValue:(id)arg2 forDetail:(unsigned long long)arg3;
- (void)setTitle:(id)arg1 value:(id)arg2 forDetail:(unsigned long long)arg3;
- (id)valueLabelForDetail:(unsigned long long)arg1;
- (id)titleLabelForDetail:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

