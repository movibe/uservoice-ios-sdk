//
//  UVTruncatingLabel.h
//  UserVoice
//
//  Created by Austin Taylor on 12/4/12.
//  Copyright (c) 2012 UserVoice Inc. All rights reserved.
//

#import "UVCalculatingLabel.h"

@interface UVTruncatingLabel : UVCalculatingLabel {
    NSString *fullText;
    UILabel *moreLabel;
    id delegate;
    BOOL expanded;
}

@property (nonatomic, retain) NSString *fullText;
@property (nonatomic, retain) UILabel *moreLabel;
@property (assign) id delegate;

- (void)expand;

@end
