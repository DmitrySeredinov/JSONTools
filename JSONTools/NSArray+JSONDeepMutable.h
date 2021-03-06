//
//  NSArray+JSONDeepMutable.h
//  JSONTools
//
//  Copyright (C) 2014 Gregory Combs [gcombs at gmail]
//  See LICENSE.txt for details.

@import Foundation;

@interface NSArray (JSONDeepMutable)

/**
 *  Recurses into the receiver's contents and makes a (mutable) copy of each value it encounters.
 *  Throws an exception if any interior value objects aren't copyable in some way. This method
 *  prefers NSMutableCopying over NSCopying whenever possible.
 *
 *  @return A deeply mutable copy of the receiver's contents.
 */
- (NSMutableArray *)copyAsDeeplyMutableJSON;

@end
