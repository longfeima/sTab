//
//  AppDelegate.m
//  sTab
//
//  Created by Seven on 2017/8/14.
//  Copyright © 2017年 Seven. All rights reserved.
//

#import "AppDelegate.h"
#import "ViewController.h"
#import "sViewController1.h"

@interface AppDelegate ()<DsTabBarProtocol>

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [self createRootTab];
    return YES;
}



- (void)createRootTab{
    
    self.rootTab = [[DsBaseTabBar alloc]init];
    
    ViewController *pre = [[ViewController alloc]init];
    UINavigationController *navPre = [[UINavigationController alloc]initWithRootViewController:pre];
    UITabBarItem *preItem=[[UITabBarItem alloc]initWithTitle:@"预览" image:[UIImage imageNamed:@"icon_tabbar_pre_nor"] selectedImage:[UIImage imageNamed:@"icon_tabbar_pre_press"]];
    navPre.tabBarItem = preItem;
    
    
    sViewController1 *home = [[sViewController1 alloc]init];
    UINavigationController *navHome  = [[UINavigationController alloc]initWithRootViewController:home];
    UITabBarItem *homeItem=[[UITabBarItem alloc]initWithTitle:@"主页" image:[UIImage imageNamed:@"icon_tabbar_home_nor"] selectedImage:[UIImage imageNamed:@"icon_tabbar_home_press"]];
    navHome.tabBarItem = homeItem;
    //    [tab addViewController:sort title:@"分类" image:@"tabbar_account@2x" selectImage:@"tabbar_account_press@2x"];
    ViewController *pre1 = [[ViewController alloc]init];
    UINavigationController *navPre1 = [[UINavigationController alloc]initWithRootViewController:pre1];
    UITabBarItem *preItem1=[[UITabBarItem alloc]initWithTitle:@"预览" image:[UIImage imageNamed:@"icon_tabbar_pre_nor"] selectedImage:[UIImage imageNamed:@"icon_tabbar_pre_press"]];
    navPre1.tabBarItem = preItem1;
    
    
    sViewController1 *home1 = [[sViewController1 alloc]init];
    UINavigationController *navHome1  = [[UINavigationController alloc]initWithRootViewController:home1];
    UITabBarItem *homeItem1=[[UITabBarItem alloc]initWithTitle:@"主页" image:[UIImage imageNamed:@"icon_tabbar_home_nor"] selectedImage:[UIImage imageNamed:@"icon_tabbar_home_press"]];
    navHome1.tabBarItem = homeItem1;
    

    self.rootTab.viewControllers = @[navPre, navHome, navPre1, navHome1];
    self.rootTab.tabBar.barStyle = UIBarStyleBlack;
    self.rootTab.tabBar.barTintColor = [UIColor whiteColor];
    self.rootTab.delegate = self;
    self.window.rootViewController = self.rootTab;
    
}

- (void)tab_selectAtIndex:(NSInteger)index{

    switch (index) {
        case 0:
        {
        }
            break;
        case 1:
        {
//            [DS_APP_DELEGATE.rootTab changeTabTitleWithTitlesArray:@[@"一", @"二", @"三", @"四"]];
////            [DS_APP_DELEGATE.rootTab changeTabTitleWithTitlesArray:@[@"hello", @"world"]];
//            /**
//             @[@"http://ddsc2.b0.upaiyun.com/common/discover/banner_hehuoren.png",
//             @"http://ddsc2.b0.upaiyun.com/common/discover/banner_bangzhu.png",
//             @"http://ddsc2.b0.upaiyun.com/common/discover/icon_rongyuzizhi.png",
//             @"http://ddsc2.b0.upaiyun.com/common/discover/icon_zaixiankefu.png"]
//             
//             */
//            [DS_APP_DELEGATE.rootTab changeTabImageWithIconsArray:
//                                    @[@"http://ddsc2.b0.upaiyun.com/common/discover/icon_shenqingxinyonka.png",
//                                      @"http://ddsc2.b0.upaiyun.com/common/discover/icon_dianbishangcheng.png",
//                                      @"http://ddsc2.b0.upaiyun.com/common/discover/icon_rongyuzizhi.png",
//                                      @"http://ddsc2.b0.upaiyun.com/common/discover/icon_zaixiankefu.png"]
//                                       SeletedImageWithIconsArray:
//                                    @[@"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E9%AB%98.png",
//                                      @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E6%B8%A9.png",
//                                      @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E5%8A%A0.png",
//                                      @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E6%81%AF.png"]];
        }
            break;
            
        default:
            break;
    }
}



- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end
