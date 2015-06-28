//
//  ViewController.h
//  new
//
//  Created by zhangwei on 15/4/4.
//  Copyright (c) 2015年 zhangwei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic,strong) NSMutableArray *resultArray;

@property (weak, nonatomic) IBOutlet UITextField *myTextView;
@property (weak, nonatomic) IBOutlet UITableView *myTableView;

- (IBAction)sendMessages:(id)sender;
@end

