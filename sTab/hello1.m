//
//  hello1.m
//  sTab
//
//  Created by Seven on 2017/9/21.
//  Copyright © 2017年 Seven. All rights reserved.
//

#import "hello1.h"

@interface hello1 ()

@end

@implementation hello1

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.title = @"world";
    self.view.backgroundColor = [UIColor grayColor];
    // Do any additional setup after loading the view.
}

- (void)viewWillAppear:(BOOL)animated{
    
    [super viewWillAppear:animated];
    
    DS_APP_DELEGATE.rootTab.selectIndex = 0;
}









@end
