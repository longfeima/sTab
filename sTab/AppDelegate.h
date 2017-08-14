//
//  AppDelegate.h
//  sTab
//
//  Created by Seven on 2017/8/14.
//  Copyright © 2017年 Seven. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "DsBaseTabBar.h"



@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) DsBaseTabBar *rootTab;

@property (strong, nonatomic) UIWindow *window;


@end

