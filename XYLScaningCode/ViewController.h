//
//  ViewController.h
//  XYLScaningCode
//
//  Created by 薛银亮 on 16/2/22.
//  Copyright © 2016年 薛银亮. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, copy) void (^backValue)(NSString *scannedStr);

@end

