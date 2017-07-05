//
//  ViewController.m
//  CircleProgress
//
//  Created by Borago on 16/7/20.
//  Copyright © 2016年 Borago. All rights reserved.
//

#import "ViewController.h"
#import "CircleProgressBar.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)valueChange:(id)sender {
    [self.progressBar setProgress:self.progressLabel.value animated:YES];

}


@end
