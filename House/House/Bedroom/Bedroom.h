//
//  Bedroom.h
//  House
//
//  Created by Cesare de Cal on 2/7/18.
//  Copyright © 2018 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, Direction) {
    North,
    South,
    East,
    West
};

@interface Bedroom : NSObject
@property (nonatomic) BOOL privateBath;
@property (nonatomic) Direction directionWindowFaces;
@end
