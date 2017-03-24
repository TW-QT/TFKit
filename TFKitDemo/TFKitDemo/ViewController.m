//
//  ViewController.m
//  TFKitDemo
//
//  Created by Dabay on 2017/3/17.
//  Copyright © 2017年 dabay. All rights reserved.
//

#import "ViewController.h"
#import <TFKit.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    //UIView+TFExtension
    UIView *tf_view=[[UIView alloc]initWithFrame:CGRectMake(0, 0, 200, 200)];
    tf_view.backgroundColor=[UIColor brownColor];
    [self.view addSubview:tf_view];


    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
