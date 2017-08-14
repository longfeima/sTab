//
//  DsBaseTabBar.h
//  DDService
//
//  Created by Seven on 2017/7/11.
//  Copyright © 2017年 Seven. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DsCustomBarItemView : UIView
@end


@interface DsBaseTabBar : UITabBarController

@property (nonatomic, assign) NSInteger showRedPointAtIndex;
/**
 @[@"0",@"1",@"1",@"0"]
 */
@property (nonatomic, strong) NSArray<NSString *> *showRedPointsAtIndexs;


- (void)showBadgeAtIndex:(NSInteger)index number:(NSString *)number;
/**
 @[@"0",@"1",@"1",@"1"] ——》 @[@"0",@"100",@"50",@"10"]
 */
- (void)showBadgesAtIndexs:(NSArray<NSString *> *)indexs numbers:(NSArray<NSString *> *)numbers;
/**change icon if icons.count == 0 invalid icons.count can small than self.viewControlers.count*/
- (void)changeTabImageWithIconsArray:(NSArray<NSString *> *)icons;

/**change titles if icons.count == 0 invalid icons.count can small than self.viewControlers.count*/
- (void)changeTabTitleWithTitlesArray:(NSArray<NSString *> *)titles;

/**This method use changeTabImageWithIconsArray: && changeTabTitleWithTitlesArray:*/
- (void)changeTabImageWithIconsArray:(NSArray<NSString *> *)icons Titles:(NSArray<NSString *> *)titles;

- (void)cancelTabImagesChanges;
- (void)cancelTabTitlesChanges;
- (void)cancelTabImagesAndTitlesChanges;

@end
