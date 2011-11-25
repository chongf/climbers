/*
 * Climbers
 * https://github.com/haqu/climbers
 *
 * Copyright (c) 2011 Sergey Tikhonov
 *
 */

#import "cocos2d.h"

@interface Rock : CCSprite{
	CGPoint velocity;
	BOOL falling;
	CGPoint maxVelocity;
	
}
@property(nonatomic,assign) CGPoint velocity;
@property(nonatomic,assign) BOOL falling;
@property(nonatomic,assign) CGPoint maxVelocity;

- (id)initWithPosition:(CGPoint)pos;
- (void)update:(ccTime)dt;

@end
