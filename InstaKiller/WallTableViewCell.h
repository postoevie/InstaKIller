//
//  WallTableViewCell.h
//  InstaKiller
//
//  Created by user on 12.04.2020.
//  Copyright © 2020 temp. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface WallTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *authorName;
@property (weak, nonatomic) IBOutlet UILabel *creationDate;
@property (weak, nonatomic) IBOutlet UIImageView *postImage;
@property (weak, nonatomic) IBOutlet UITextView *postText;

@end
