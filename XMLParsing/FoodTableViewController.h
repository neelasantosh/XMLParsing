//
//  FoodTableViewController.h
//  XMLParsing
//
//  Created by Rajesh on 17/12/15.
//  Copyright (c) 2015 CDAC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FoodTableViewController : UITableViewController<NSXMLParserDelegate>
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *indicator;

@property (strong, nonatomic) IBOutlet UITableView *viewTable;

- (IBAction)loadFoodXML:(id)sender;

@property BOOL isName;
@property BOOL isPrice;
@property NSMutableArray *arrayFooditems;

@end
