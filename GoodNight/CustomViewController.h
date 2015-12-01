//
//  CustomViewController.h
//  GoodNight
//
//  Created by Anthony Agatiello on 10/4/15.
//  Copyright © 2015 ADA Tech, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CustomViewController : UITableViewController <UIAlertViewDelegate>{
    BOOL warningIgnored;
}

@property (weak, nonatomic) IBOutlet UISwitch *rgbSwitch;
@property (weak, nonatomic) IBOutlet UISlider *redSlider;
@property (weak, nonatomic) IBOutlet UISlider *greenSlider;
@property (weak, nonatomic) IBOutlet UISlider *blueSlider;

@end