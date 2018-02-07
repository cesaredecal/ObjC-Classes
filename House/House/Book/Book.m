//
//  Book.m
//  House
//
//  Created by Cesare de Cal on 2/7/18.
//  Copyright © 2018 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import "Book.h"

@implementation Book

-(instancetype)initWithTitle:(NSString*)title
                      author:(NSString*)author
                        year:(int)year {
        self = [super init];
        if(self) {
            _title = title;
            _author = author;
            _yearOfPublication = year;
        }
        return self;
    }
    
@end
