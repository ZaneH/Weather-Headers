//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIImageView;

@interface HourlyForecastCell : UICollectionViewCell
{
    _Bool _hasBoldTime;
    NSString *_detail;
    UIImageView *_timeImageView;
    UIImageView *_detailImageView;
    UIImageView *_percentChanceImageView;
    UIImageView *_conditionImageView;
    NSString *_time;
}

+ (void)resetHourlyForecastCellSize;
+ (struct CGSize)size;
@property(nonatomic) _Bool hasBoldTime; // @synthesize hasBoldTime=_hasBoldTime;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) UIImageView *conditionImageView; // @synthesize conditionImageView=_conditionImageView;
@property(retain, nonatomic) UIImageView *percentChanceImageView; // @synthesize percentChanceImageView=_percentChanceImageView;
@property(retain, nonatomic) UIImageView *detailImageView; // @synthesize detailImageView=_detailImageView;
@property(retain, nonatomic) UIImageView *timeImageView; // @synthesize timeImageView=_timeImageView;
@property(readonly) NSString *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setDetail:(id)arg1 bold:(_Bool)arg2;
- (void)setPrecipitation:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)clearCellContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

