//
//  RNRoam.h
//  RoamApp
//

#import <Foundation/Foundation.h>
// Conditional import for compatibility with different React Native versions

#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

// Import the RCTEventEmitter protocol for emitting events to the JavaScript side
#import <React/RCTEventEmitter.h>

// Declare the RNRoam class, inheriting from RCTEventEmitter and RCTBridgeModule
@interface RNRoam : RCTEventEmitter <RCTBridgeModule>

@end
