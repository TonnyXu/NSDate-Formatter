//
//  TXDetailViewController.h
//  NSDate&Formatter
//
//  Created by Tonny on 12/01/26.
//  Copyright (c) 2012年 Tonny Xu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TXDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
