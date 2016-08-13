//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAnimation.h"

@interface WAAnimation : UIAnimation
{
    double _w0;
    double _zeta;
    double _wd;
    double _A;
    double _B;
    id <WAAnimationDelegate> _wa_delegate;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) __weak id <WAAnimationDelegate> wa_delegate; // @synthesize wa_delegate=_wa_delegate;
- (void).cxx_destruct;
- (float)progressForFraction:(float)arg1;
- (float)eval:(float)arg1;
- (void)setProgress:(float)arg1;
- (id)initWithTarget:(id)arg1;

@end
