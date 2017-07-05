//
//  ViewController.h
//  CircleProgress
//
//  Created by Borago on 16/7/20.
//  Copyright © 2016年 Borago. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CircleProgressBar;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet CircleProgressBar *progressBar;
@property (weak, nonatomic) IBOutlet UISlider *progressLabel;

- (IBAction)valueChange:(id)sender;

@end

