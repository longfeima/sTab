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

@interface AppDelegate ()

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
    
    

    self.rootTab.viewControllers = @[navPre, navHome];
    self.rootTab.tabBar.barStyle = UIBarStyleBlack;
    self.rootTab.tabBar.barTintColor = [UIColor whiteColor];
    self.rootTab.delegate = self;
    self.window.rootViewController = self.rootTab;
    
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
