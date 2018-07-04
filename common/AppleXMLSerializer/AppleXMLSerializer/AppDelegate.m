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
    AppDelegate.m
    testReflection

    Created by Syed Masum Billah on 10/14/16.
*/

#import "AppDelegate.h"
#import "Sinter.h"
#import "Serializer.h"
#import "MouseOrCaret.h"
#import "KbdOrAction.h"


@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;
@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
//    // Insert code here to initialize your application
    
}


- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application
}


-(NSString *) getContenthOfFile:(NSString *) filename {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    NSString* path = [[NSBundle mainBundle] pathForResource:filename ofType:@"xml"];
    NSLog(@"%@", path);
    NSData* data =  [fileManager contentsAtPath:path];
    NSString* xml = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    return xml;
}

-(void) saveFileWithName:(NSString*) filename withContent:(NSData*) data {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    NSString* path = [[NSBundle mainBundle] pathForResource:filename ofType:@"xml"];
    NSLog(@"%@", path);
    [fileManager createFileAtPath:path contents:data attributes:nil];
}

- (Sinter *) getSampleSinter {
    Header* header = [[Header alloc] init];
    [header setService_code:[NSNumber numberWithInt:21]];
    [header setProcess_id:@"100001"];
    
    [header setScreen:[[Screen alloc] initWithHeight:1024 andWidth:1280]];
    [header setMouse_or_caret:[[MouseOrCaret alloc] initWithX:10 andY:23 andButton:1]];
    [header setKbd_or_action:[[KbdOrAction alloc] initWithTarget:@"click_here" andData:@"new data"]];
    
    Entity* en0 = [[Entity alloc] init];
    en0.type  = @"window";
    {
        Entity* en1 = [[Entity alloc] init];
        en1.type  = @"button";
        {
            Entity* en2 = [[Entity alloc] init];
            en2.type  = @"textbox";
            //
            Entity* en3 = [[Entity alloc] init];
            en3.type  = @"radio1";
            //
            en1.children = [[NSMutableArray alloc] initWithArray:@[en2, en3]];
        }
        
        Entity* en4 = [[Entity alloc] init];
        en4.type  = @"tree";
        {
            Entity* en5 = [[Entity alloc] init];
            en5.type  = @"list";
            //
            en4.children = [[NSMutableArray alloc] initWithArray:@[en5]];
        }
        //
        en0.children = [[NSMutableArray alloc] initWithArray:@[en1, en4]];
    }
    
    Sinter * sinter = [[Sinter alloc] init];
    sinter.header = header;
    sinter.entity = en0;
    
    { // applications
        Entity* app1 = [[Entity alloc] init];
        app1.type  = @"window";
        app1.name  = @"calculator";
        //
        Entity* app2 = [[Entity alloc] init];
        app2.type  = @"window";
        app2.name  = @"notepad";
        //
        sinter.applications = [[NSMutableArray alloc] initWithObjects:app1, app2, nil];
    }
    
    { // updates
        Entity* update = [[Entity alloc] init];
        update.unique_id = @"key123";
        update.type  = @"textbox";
        update.name  = @"new data";
        update.top   = [NSNumber numberWithInt:12];
        update.width   = [NSNumber numberWithInt:200];
        //
        sinter.updates = [[NSMutableArray alloc] initWithObjects:update, nil];
    }
    
    return sinter;
}

- (IBAction)clickMe:(id)sender {
    Sinter* sinter = [self getSampleSinter];
    NSData* xml = [Serializer objectToXml:sinter];
    [self saveFileWithName:@"sample2" withContent:xml];
}

- (IBAction)clickMe2:(id)sender {
    NSString* xml = [self getContenthOfFile:@"sample2"]; //sample1
    
    Sinter * sinter = [Serializer xmlToObject:xml];
    if(sinter) {
        NSLog(@"Successfully deserialized the xml");
    } else {
        NSLog(@"Failed to deserialize the xml");
    }
}
@end
