//
//  RPSTurn.m
//  RockPaperScissors
//
//  Created by Cesare de Cal on 2/7/18.
//  Copyright © 2018 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import "RPSTurn.h"

@implementation RPSTurn
-(instancetype)initWithMove:(Move)move {
    self = [super init];
    if(self) {
        _move = move;
    }
    return self;
}
@end
