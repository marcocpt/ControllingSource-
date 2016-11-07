//
//  DetailViewController.h
//  ControllingSource
//
//  Created by wgd on 16/11/7.
//  Copyright (c) 2016年 marcow. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
