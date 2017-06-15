//
//  TwoViewController.h
//  BaiduMapTest
//
//  Created by HMRL on 17/5/18.
//  Copyright © 2017年 HMRL. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^testBlock)(NSString*test);

@interface TwoViewController : UIViewController

@property (nonatomic, copy)  testBlock littleBlock;

- (instancetype)initCompletion:(void(^)(NSString *test))testBlock;


@end