//  OCMockito by Jon Reid, https://qualitycoding.org
//  Copyright 2022 Jonathan M. Reid. See LICENSE.txt

#import <Foundation/Foundation.h>

#import "MKTTestLocation.h"

@class MKTInvocationMatcher;
@class MKTOngoingStubbing;
@class MKTBaseMockObject;
@protocol HCMatcher;
@protocol MKTVerificationMode;


NS_ASSUME_NONNULL_BEGIN

@interface MKTMockingProgress : NSObject

@property (nonatomic, assign, readonly) MKTTestLocation testLocation;

+ (instancetype)sharedProgress;
- (void)reset;

- (void)stubbingStartedAtLocation:(MKTTestLocation)location;
- (void)reportOngoingStubbing:(MKTOngoingStubbing *)ongoingStubbing;
- (MKTOngoingStubbing *)pullOngoingStubbing;

- (void)verificationStarted:(id <MKTVerificationMode>)mode atLocation:(MKTTestLocation)location withMock:(MKTBaseMockObject *)mock;

- (id <MKTVerificationMode>)pullVerificationModeWithMock:(MKTBaseMockObject *)mock;

- (void)setMatcher:(id <HCMatcher>)matcher forArgument:(NSUInteger)index;
- (MKTInvocationMatcher *)pullInvocationMatcher;

@end

NS_ASSUME_NONNULL_END
