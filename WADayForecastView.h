//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DayForecast, NSLayoutConstraint, UIImageView;

@interface WADayForecastView : UIView
{
    unsigned long long _weekdayIndex;
    _Bool _isTodayCell;
    _Bool _isDataCelsius;
    DayForecast *_dayForecast;
    UIImageView *_dayNameImage;
    UIImageView *_dayDescriptionImage;
    UIImageView *_highTempImage;
    UIImageView *_lowTempImage;
    UIImageView *_conditionImage;
    double _rightColumnWidth;
    NSLayoutConstraint *_highTemperatureTrailingConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *highTemperatureTrailingConstraint; // @synthesize highTemperatureTrailingConstraint=_highTemperatureTrailingConstraint;
@property(nonatomic) double rightColumnWidth; // @synthesize rightColumnWidth=_rightColumnWidth;
@property(retain, nonatomic) UIImageView *conditionImage; // @synthesize conditionImage=_conditionImage;
@property(retain, nonatomic) UIImageView *lowTempImage; // @synthesize lowTempImage=_lowTempImage;
@property(retain, nonatomic) UIImageView *highTempImage; // @synthesize highTempImage=_highTempImage;
@property(retain, nonatomic) UIImageView *dayDescriptionImage; // @synthesize dayDescriptionImage=_dayDescriptionImage;
@property(retain, nonatomic) UIImageView *dayNameImage; // @synthesize dayNameImage=_dayNameImage;
@property(nonatomic, setter=setDataIsCelsius:) _Bool isDataCelsius; // @synthesize isDataCelsius=_isDataCelsius;
@property(nonatomic) _Bool isTodayCell; // @synthesize isTodayCell=_isTodayCell;
@property(copy, nonatomic) DayForecast *dayForecast; // @synthesize dayForecast=_dayForecast;
- (void).cxx_destruct;
- (void)updateHighTemperatureTrailingConstraint;
- (void)_createDayDescriptionConstraints;
- (void)_createConstraints;
- (double)desiredRightColumnWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

