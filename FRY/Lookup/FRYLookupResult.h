//
//  FRYQueryResult.h
//  FRY
//
//  Created by Brian King on 10/8/14.
//  Copyright (c) 2014 Raizlabs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FRYLookupResult : NSObject

/**
 * A lookup result will often have mutliple views with matching accessibilityLabels, where one view is
 * a subview / implementation detail of the superview.   Remove these duplicate results.
 */
+ (NSArray *)removeAncestorsFromLookupResults:(NSArray *)results;

- (instancetype)initWithView:(UIView *)view frame:(CGRect)frame;

@property (strong, nonatomic, readonly) UIView *view;
@property (assign, nonatomic, readonly) CGRect frame;

// The thought here is to have lookup's generate actions that can cause visibility.   TBD.
//@property (copy, nonatomic) NSArray *actions;

@end
