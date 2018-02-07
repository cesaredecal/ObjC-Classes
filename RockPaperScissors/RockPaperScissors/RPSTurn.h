//
//  RPSTurn.h
//  RockPaperScissors
//
//  Created by Cesare de Cal on 2/7/18.
//  Copyright © 2018 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, Move) {
    Rock,
    Paper,
    Scissors
};

@interface RPSTurn : NSObject
    @property Move move;
    -(instancetype)initWithMove:(Move)move;
@end
