//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WACardCollectionViewController;

@protocol WACardCollectionViewControllerDelegate <NSObject>
- (void)cardCollectionViewControllerPreviewDidDismiss;
- (void)cardCollectionViewController:(WACardCollectionViewController *)arg1 deleteCityAtIndex:(long long)arg2;
- (void)cardCollectionViewControllerDidFinishReorder:(WACardCollectionViewController *)arg1;
- (void)cardCollectionViewController:(WACardCollectionViewController *)arg1 exchangeCityAtIndex:(long long)arg2 withCityAtIndex:(long long)arg3;
- (void)cardCollectionViewController:(WACardCollectionViewController *)arg1 showCityPickerAnimated:(_Bool)arg2;
- (void)cardCollectionViewController:(WACardCollectionViewController *)arg1 showCityAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)cardCollectionViewController:(WACardCollectionViewController *)arg1 showCityAtIndex:(long long)arg2;
@end
