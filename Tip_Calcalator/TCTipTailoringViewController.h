//
//  FirstViewController.h
//  Tip_Calcalator
//
//  Created by Kingfisher on 10/27/14.
//  Copyright (c) 2014 __ASU__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCTipTailoringTableViewCell.h"

@interface TCTipTailoringViewController : UIViewController <UITableViewDataSource, UITableViewDelegate,
TCTipTailoringTableViewCellDelegate>

@property (nonatomic, strong) IBOutlet UITableView *tableView;
@end

