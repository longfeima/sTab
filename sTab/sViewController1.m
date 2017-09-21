//
//  sViewController1.m
//  sTab
//
//  Created by Seven on 2017/8/14.
//  Copyright © 2017年 Seven. All rights reserved.
//

#import "sViewController1.h"

@interface sViewController1 ()

@end

@implementation sViewController1

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.title = @"world";
    self.view.backgroundColor = [UIColor orangeColor];
    // Do any additional setup after loading the view.
}

- (void)viewWillAppear:(BOOL)animated{

    [super viewWillAppear:animated];
    
    DS_APP_DELEGATE.rootTab.selectIndex = 3;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{

    /**
    [DS_APP_DELEGATE.rootTab changeTabTitleWithTitlesArray:@[@"四", @"三", @"二", @"一"]];
    //            [DS_APP_DELEGATE.rootTab changeTabTitleWithTitlesArray:@[@"hello", @"world"]];
    
     @[@"http://ddsc2.b0.upaiyun.com/common/discover/icon_shenqingxinyonka.png",
     @"http://ddsc2.b0.upaiyun.com/common/discover/icon_dianbishangcheng.png",
     @"http://ddsc2.b0.upaiyun.com/common/discover/icon_rongyuzizhi.png",
     @"http://ddsc2.b0.upaiyun.com/common/discover/icon_zaixiankefu.png"]
     
     
     
     @[@"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E9%AB%98.png",
     @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E6%B8%A9.png",
     @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E5%8A%A0.png",
     @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E6%81%AF.png"]
     
     
    [DS_APP_DELEGATE.rootTab changeTabImageWithIconsArray:
     @[@"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E9%AB%98.png",
       @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E6%B8%A9.png",
       @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E5%8A%A0.png",
       @"http://ddsc2.b0.upaiyun.com/common/activityIcon/addInterest/icon__%E6%81%AF.png"]
                               SeletedImageWithIconsArray:
     @[@"http://ddsc2.b0.upaiyun.com/common/discover/icon_shenqingxinyonka.png",
       @"http://ddsc2.b0.upaiyun.com/common/discover/icon_dianbishangcheng.png",
       @"http://ddsc2.b0.upaiyun.com/common/discover/icon_rongyuzizhi.png",
       @"http://ddsc2.b0.upaiyun.com/common/discover/icon_zaixiankefu.png"]];
     */
    
    if (self.isPre) {
        [self dismissViewControllerAnimated:YES completion:nil];
        return;
    }
    
    sViewController1 *vc = [[sViewController1 alloc]init];
    vc.isPre = YES;
    
    
    [self presentViewController: vc animated:YES completion:nil];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
