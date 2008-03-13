//
//  MFServerFSProtocol.h
//  MacFusion2
//
//  Created by Michael Gorbach on 2/14/08.
//  Copyright 2008 Michael Gorbach. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class MFServerPlugin;

@protocol MFServerFSProtocol <NSObject>
- (NSDictionary*)statusInfo;
- (NSDictionary*)parameters;

- (void)mount;
- (void)unmount;
- (NSError*)validateAndSetParameters:(NSDictionary*)params;
- (MFServerPlugin*)plugin;
- (void)setPauseTimeout:(BOOL)pause;

@end
