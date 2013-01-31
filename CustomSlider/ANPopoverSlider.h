//
//  ANPopoverSlider.h
//  CustomSlider
//
//  Created by Gabriel  on 30/1/13.
//  Copyright (c) 2013 App Ninja. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ANPopoverView.h"

@interface ANPopoverSlider : UISlider

@property (strong, nonatomic) ANPopoverView *popupView;

@property (nonatomic, readonly) CGRect thumbRect;

@end

