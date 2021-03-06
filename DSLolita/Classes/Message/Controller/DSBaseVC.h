//
//  DSBaseVC.h
//  DSLolita
//
//  Created by 赛 丁 on 15/6/5.
//  Copyright (c) 2015年 samDing. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "DSUtils.h"


@interface DSBaseVC : UIViewController

-(void)showNetworkIndicator;

-(void)hideNetworkIndicator;

-(void)showProgress;

-(void)hideProgress;

-(void)alert:(NSString*)msg;

-(BOOL)alertError:(NSError*)error;

-(BOOL)filterError:(NSError*)error;

-(void)runInMainQueue:(void (^)())queue;

-(void)runInGlobalQueue:(void (^)())queue;

-(void)runAfterSecs:(float)secs block:(void (^)())block;

-(void)showHUDText:(NSString*)text;

@end