/* Copyright (C) 2014--2018 Stony Brook University
   Copyright (C) 2016--2018 The University of North Carolina at Chapel Hill

   This file is part of the Sinter Remote Desktop System.

   Sinter is dual-licensed, available under a commercial license or
   for free subject to the LGPL.  

   Sinter is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.  Sinter is distributed in the
   hope that it will be useful, but WITHOUT ANY WARRANTY; without even
   the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
   PURPOSE.  See the GNU Lesser General Public License for more details.  You
   should have received a copy of the GNU Lesser General Public License along
   with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
    Sinter.h
    testReflection

    Created by Syed Masum Billah on 10/14/16.
*/

#import <Foundation/Foundation.h>
#include "Header.h"
#include "Entity.h"


@interface Sinter : NSObject
@property (nonatomic, retain) Header*         header;
@property (nonatomic, retain) Entity*         entity;
@property (nonatomic, retain) NSMutableArray* entities;

- (id) init;
- (id) initWithEntity;
- (id) initWithEntities;
- (id) initWithServiceCode:(NSNumber * ) serviceCode ;
- (id) initWithServiceCode:(NSNumber * ) serviceCode andKbdOrActionWithTarget:(NSString *) targetId andData:(NSString *) data ; //deprecated
- (id) initWithServiceCode:(NSNumber * ) serviceCode subCode:(NSNumber *)subCode processId:(NSString*)processId targetId:(NSString *) targetId data:(NSString *) data;
//- (id) initWithServiceCode:(NSNumber * ) serviceCode andMouseWithX:(int) x andY:(int) y andButton:(int) button; //not used at all
- (id) initWithServiceCode:(NSNumber * ) serviceCode andCaret:(int) location andLength:(int) ending andTarget:(NSString*) targetId; //deprecated?

+ (NSArray *) getSerializableProperties;

@end




