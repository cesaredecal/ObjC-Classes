//
//  House.h
//  House
//
//  Created by Cesare de Cal on 2/7/18.
//  Copyright © 2018 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Bedroom.h"

@interface House : NSObject
    
@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) int numberOfBedrooms;
@property (nonatomic) BOOL hasHotTub;
@property (nonatomic) Bedroom *frontBedroom;
@property (nonatomic) Bedroom *backBedroom;    
@end
