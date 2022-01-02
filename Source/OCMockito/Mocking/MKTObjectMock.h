//  OCMockito by Jon Reid, https://qualitycoding.org
//  Copyright 2022 Jonathan M. Reid. See LICENSE.txt

#import <OCMockito/MKTBaseMockObject.h>


NS_ASSUME_NONNULL_BEGIN

/*!
 * @abstract Mock object of a given class.
 */
@interface MKTObjectMock : MKTBaseMockObject

- (instancetype)initWithClass:(Class)aClass NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
