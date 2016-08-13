//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel;

@interface WAUnitSelectionControl : UIButton
{
    long long _selectedState;
    UILabel *_celsiusLabel;
    UILabel *_fahrenheitLabel;
    UIImageView *_dividerImageView;
}

@property(readonly, nonatomic) UIImageView *dividerImageView; // @synthesize dividerImageView=_dividerImageView;
@property(readonly, nonatomic) UILabel *fahrenheitLabel; // @synthesize fahrenheitLabel=_fahrenheitLabel;
@property(readonly, nonatomic) UILabel *celsiusLabel; // @synthesize celsiusLabel=_celsiusLabel;
@property(nonatomic) long long selectedState; // @synthesize selectedState=_selectedState;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)generateDivider;
- (id)initWithFrame:(struct CGRect)arg1;

@end

