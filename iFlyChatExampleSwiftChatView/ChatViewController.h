//
//  ChatViewController.h
//  test
//
//  Created by Prateek Grover on 06/04/15.
//  Copyright (c) 2015 Prateek Grover. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ChatTableViewCell.h"
#import "iFlyChatLibrary/iFlyChatLibrary.h"

@interface ChatViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *chatTable;

@property (weak, nonatomic) IBOutlet UIButton *sendButton;

@property (weak, nonatomic) IBOutlet UITextView *messageText;

@property (weak, nonatomic) IBOutlet UIImageView *userImage;

@property (weak, nonatomic) IBOutlet UIView *contentView;

@end
