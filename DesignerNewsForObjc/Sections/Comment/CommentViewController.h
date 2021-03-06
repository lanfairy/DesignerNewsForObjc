//
//  CommentViewController.h
//  DesignerNewsForObjc
//
//  Created by Sam Lau on 4/8/15.
//  Copyright (c) 2015 Sam Lau. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CommentViewModel.h"
#import "Story.h"

@interface CommentViewController : UITableViewController

@property (strong, nonatomic, readonly) CommentViewModel *viewModel;

- (void)setViewModelWithStory:(Story*)story;

@end
