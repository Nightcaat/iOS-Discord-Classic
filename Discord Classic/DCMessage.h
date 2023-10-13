//
//  DCMessage.h
//  Discord Classic
//
//  Created by Julian Triveri on 4/6/18.
//  Copyright (c) 2018 Julian Triveri. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DCUser.h"

@interface DCMessage : NSObject
@property NSString* snowflake;
@property DCUser* author;
@property NSString* content;
@property int embeddedImageCount;
@property NSMutableArray* embeddedImages;
@property int contentHeight;
@property int authorNameWidth;
@property NSDate* timestamp;
@property NSString* prettyTimestamp;
@property bool pingingUser;
@property bool isGrouped;

- (void)deleteMessage;
- (BOOL)isEqual:(id)other;
@end
