//
//  world1.m
//  sTab
//
//  Created by Seven on 2017/9/21.
//  Copyright © 2017年 Seven. All rights reserved.
//

#import "world1.h"

@interface world1 ()

@end

@implementation world1

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.title = @"world";
    self.view.backgroundColor = [UIColor greenColor];
    // Do any additional setup after loading the view.
}

- (void)viewWillAppear:(BOOL)animated{
    
    [super viewWillAppear:animated];
    
    DS_APP_DELEGATE.rootTab.selectIndex = 1;
}


- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    world1 *vc = [[world1 alloc]init];
    vc.hidesBottomBarWhenPushed = YES;
    [self.navigationController pushViewController:vc animated:YES];
}

@end
