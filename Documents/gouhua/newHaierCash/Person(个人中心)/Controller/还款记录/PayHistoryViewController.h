//
//  PayHistoryViewController.h
//  personMerchants
//
//  Created by Apple on 16/3/18.
//  Copyright © 2016年 海尔金融. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RepaymentHistoryModel.h"
#import "HCBaseViewController.h"
@interface PayHistoryViewController : HCBaseViewController
@property(nonatomic, strong) RepaymentHistoryModel *repaymentHistoryModel;
@end
