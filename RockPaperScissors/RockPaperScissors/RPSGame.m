//
//  RPSGame.m
//  RockPaperScissors
//
//  Created by Cesare de Cal on 2/7/18.
//  Copyright © 2018 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import "RPSGame.h"

@implementation RPSGame
    -(instancetype)initWithFirstTurn:(RPSTurn *)firstTurn secondTurn:(RPSTurn *)secondTurn {
        self = [super init];
        if(self) {
            _firstTurn = firstTurn;
            _secondTurn = secondTurn;
        }
        return self;
    }
@end
