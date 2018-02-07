//
//  Person.m
//  House
//
//  Created by Cesare de Cal on 2/7/18.
//  Copyright © 2018 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import "Person.h"

@implementation Person

    -(instancetype)initWithName:(NSString*)name
                       birthday:(NSDate*)birthday {
        self = [super init];
        if (self) {
            _name = name;
            _birthday = birthday;
        }
        return self;
    }
@end
