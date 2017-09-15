//
//  ViewController.m
//  sTab
//
//  Created by Seven on 2017/8/14.
//  Copyright © 2017年 Seven. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.title = @"hello";
    self.view.backgroundColor = [UIColor whiteColor];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)viewWillAppear:(BOOL)animated{

    [super viewWillAppear:animated];
    
    
    
}


- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{

    [DS_APP_DELEGATE.rootTab changeTabTitleWithTitlesArray:@[@"一", @"二", @"三", @"四"]];
    //            [DS_APP_DELEGATE.rootTab changeTabTitleWithTitlesArray:@[@"hello", @"world"]];
    /**
     @[@"http://ddsc2.b0.upaiyun.com/common/discover/icon_shenqingxinyonka.png",
     @"http://ddsc2.b0.upaiyun.com/common/discover/icon_dianbishangcheng.png",
     @"http://ddsc2.b0.upaiyun.com/common/discover/icon_rongyuzizhi.png",
     @"http://ddsc2.b0.upaiyun.com/common/discover/icon_zaixiankefu.png"]
     
     */
    [DS_APP_DELEGATE.rootTab changeTabImageWithIconsArray:
     @[@"http://ddsc2.b0.upaiyun.com/common/discover/icon_shenqingxinyonka.png",
       @"http://ddsc2.b0.upaiyun.com/common/discover/icon_dianbishangcheng.png",
       @"http://ddsc2.b0.upaiyun.com/common/discover/icon_rongyuzizhi.png",
       @"http://ddsc2.b0.upaiyun.com/common/discover/icon_zaixiankefu.png"]
                               SeletedImageWithIconsArray:
     @[@"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E9%AB%98.png",
       @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E6%B8%A9.png",
       @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E5%8A%A0.png",
       @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E6%81%AF.png"]];

    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
