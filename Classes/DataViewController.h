//
//  DataViewController.h
//  StackScrollView
//
//  Created by Reefaq on 2/24/11.
//  Copyright 2011 raw engineering . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
	UITableView*  _tableView;
}

- (id)initWithFrame:(CGRect)frame;


@property(nonatomic, retain)UITableView* tableView;

@end
