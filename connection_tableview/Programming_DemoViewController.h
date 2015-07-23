//
//  Programming_DemoViewController.h
//  connection_tableview
//
//  Created by Sam on 18/02/15.
//  Copyright (c) 2015 Bets. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Programming_DemoViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,NSXMLParserDelegate>
{
    NSXMLParser *xmlParser;
}
@property(copy,nonatomic)IBOutlet UITableView *table1;


@end
