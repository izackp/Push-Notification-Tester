//
//  UIActivityViewController+PNT.h
//  PushNotificationTester
//
//  Created by Isaac Paul on 3/18/15.
//  Copyright (c) 2015 Isaac Paul. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIActivityViewController (PNT)

+ (UIActivityViewController*)buildDefaultShareActivity:(NSString*)text;

@end
