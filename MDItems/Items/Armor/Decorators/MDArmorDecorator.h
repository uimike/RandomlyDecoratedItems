//
//  MDArmorDecorator.h
//  MDItems
//
//  Created by Dickman, Mike on 8/11/14.
//  Copyright (c) 2014 Dickman, Mike. All rights reserved.
//

#import "MDArmor.h"

@interface MDArmorDecorator : MDArmor

@property(nonatomic, strong) MDArmor *armor;

-(instancetype)initWithArmor:(MDArmor*)armor;

@end
