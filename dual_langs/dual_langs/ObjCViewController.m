//
//  ObjCViewController.m
//  dual_langs
//
//  Created by Byrdann Fox on 9/1/14.
//  Copyright (c) 2014 ExcepApps, Inc. All rights reserved.
//

#import "ObjCViewController.h"
// #import "c_hacker.h"
#import "CPlusPlusHacker.h"

@interface ObjCViewController ()

@end

@implementation ObjCViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor redColor];
    
    // Do any additional setup after loading the view.

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*-(void)cHacker {
    addItInC();
}*/

-(void)cPlusPlusHacker {
    // addItInCPlusPlus();
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
