//
//  Book.h
//  House
//
//  Created by Cesare de Cal on 2/7/18.
//  Copyright © 2018 Cesare Gianfilippo Astianatte de Cal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

@interface Book : NSObject
@property (nonatomic) NSString *title;
@property (nonatomic) Person *author;
@property (nonatomic) int yearOfPublication;

-(instancetype)initWithTitle:(NSString*)title
                      author:(Person*)author
                        year:(int)year;
@end
