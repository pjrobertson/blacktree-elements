//
//  NSAppleEventDescriptor+NDAppleScriptObject_QSMods.h
//  Quicksilver
//
//  Created by Nicholas Jitkoff on 8/19/04.
//  Copyright 2004 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "NSAppleEventDescriptor+NDAppleScriptObject.h"
@interface NSAppleEventDescriptor (NDAppleScriptObject_QSMods)

//+ (NSAppleEventDescriptor *)targetDescriptorWithBundleID:(NSString *)bundleID;
+ (NSAppleEventDescriptor *)targetDescriptorWithTypeSignature:(OSType)type;
- (NSAppleEventDescriptor *)AESend;
- (NSAppleEventDescriptor *)AESendWithSendMode:(AESendMode)sendMode priority:(AESendPriority)sendPriority timeout:(long) timeOutInTicks;	
@end
