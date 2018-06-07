//
//  Config.h
//  AppleXMLSerializer
//
//  Created by Syed Masum Billah on 10/16/16.
//  Copyright © 2016 Syed Masum Billah. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Config : NSObject

+ (NSArray *)      getProperties:(NSString *) className;
+ (NSDictionary *) getClasses;

+ (NSDictionary *) getServiceCodes;
+ (NSDictionary *) getRoleMappings;
+ (NSDictionary *) getDictFromKey:(NSString *) key;

// utility methods
+ (NSString *)     convertCamelCase2Underscores: (NSString *) input;


@end
