//
//  ViewController.m
//  Embedded
//
//  Created by Vrana, Jozef on 28/02/2019.
//  Copyright © 2019 Wirecard Technologies GmbH. All rights reserved.
//

#import "ViewControllerEmbedded.h"
#import <WDeComCard/WDeComCard.h>

NSString *const PMTitleCardfield                     = @"Cardfield";
NSString *const PMTitleAnimatedCardfield             = @"Animated cardfield";
NSString *const PMTitleCardfieldManualBrandSelection = @"Cardfield manual brand selection";
NSString *const PMTitleCardManualBrandSelectionAnimated = @"Animated card manual brand selection";

@interface ViewControllerEmbedded ()

@end

@implementation ViewControllerEmbedded

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (IBAction)onPay:(UIButton *)sender {
    UIAlertController *ac = [UIAlertController alertControllerWithTitle:@"Payment method"
                                                                message:nil
                                                         preferredStyle:UIAlertControllerStyleActionSheet];
    
    void (^handler)(UIAlertAction *action) = ^(UIAlertAction * _Nonnull action) {
        
        NSString *title = action.title;
        if ([title isEqualToString:PMTitleCardfield] || [title isEqualToString:PMTitleCardfieldManualBrandSelection]) {
            UIStoryboard *storyboard = [UIStoryboard storyboardWithName:@"Main" bundle: nil];
            UIViewController * vc = [storyboard instantiateViewControllerWithIdentifier:@"CardfieldVC"];
            [self.navigationController pushViewController:vc animated:YES];
            BOOL manualCardbrandSelection = [title isEqualToString:PMTitleCardfieldManualBrandSelection] ? YES : NO;
            [[WDECCardLayout appearance] setManualCardBrandSelectionRequired:manualCardbrandSelection];
        } else if ([title isEqualToString:PMTitleAnimatedCardfield] || [title isEqualToString:PMTitleCardManualBrandSelectionAnimated]) {
            UIStoryboard *storyboard = [UIStoryboard storyboardWithName:@"Main" bundle: nil];
            UIViewController * vc = [storyboard instantiateViewControllerWithIdentifier:@"AnimatedCardfieldVC"];
            [self.navigationController pushViewController:vc animated:YES];
            BOOL manualCardbrandSelection = [title isEqualToString:PMTitleCardManualBrandSelectionAnimated] ? YES : NO;
            [[WDECCardLayout appearance] setManualCardBrandSelectionRequired:manualCardbrandSelection];
        }
    };
    
    [ac addAction:[UIAlertAction actionWithTitle:PMTitleCardfield                       style:UIAlertActionStyleDefault handler:handler]];
    [ac addAction:[UIAlertAction actionWithTitle:PMTitleAnimatedCardfield               style:UIAlertActionStyleDefault handler:handler]];
    [ac addAction:[UIAlertAction actionWithTitle:PMTitleCardfieldManualBrandSelection   style:UIAlertActionStyleDefault handler:handler]];
    [ac addAction:[UIAlertAction actionWithTitle:PMTitleCardManualBrandSelectionAnimated style:UIAlertActionStyleDefault handler:handler]];
    [ac addAction:[UIAlertAction actionWithTitle:@"Cancel"                              style:UIAlertActionStyleCancel handler:handler]];
    
    [self presentViewController:ac animated:YES completion:nil];
}

@end
