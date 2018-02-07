//
//  RPSGame.h
//  RockPaperScissors
//
//  Created by Cesare de Cal on 2/7/18.
//  Copyright © 2018 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPSTurn.h"

@interface RPSGame : NSObject
    @property (nonatomic) RPSTurn *firstTurn;
    @property (nonatomic) RPSTurn *secondTurn;
    -(instancetype)initWithFirstTurn:(RPSTurn*)firstTurn
                          secondTurn:(RPSTurn*)secondTurn;
@end
