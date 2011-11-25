/*
 * Climbers
 * https://github.com/haqu/climbers
 *
 * Copyright (c) 2011 Sergey Tikhonov
 *
 */

#import "cocos2d.h"
#import "PlaytomicResponse.h" // for GameVars

@class Hero;
@class VRope;
@class Rock;

// note the <PlaytomicDelegate>
@interface Game : CCLayer <PlaytomicDelegate> {
	CCSpriteBatchNode *batch1;
	CCSpriteBatchNode *batch2;
	CCSpriteBatchNode *ropeBatch;
	Hero *hero1;
	Hero *hero2;
	VRope *rope;
	NSMutableArray *grabs;
	NSMutableArray *stars;
	BOOL dragInProgress;
	Hero *dragHero;
	Hero *dragOtherHero;
	CGPoint dragOffset;
	CGPoint cameraOffset;
	float levelHeight;
	BOOL gameInProgress;
	int currentLevel;
	int nextLevel;
	CGPoint startPosition1;
	CGPoint startPosition2;
	CCSprite *snapFeedback;
	Rock *rock;
	CCSprite *rockAlert;
	CGPoint lastTouchLocation;
	NSTimer *rockTimer;
	float ropeLength;
	float sw;
	float sh;
	float heroStarDist;
	float heroRockDist;
	float snapDist;
	int starsCollected;
	int starsTotal;
	CCSprite *starIcon;
	CCLabelBMFont *starsCollectedLabel;
	CCSprite *menuButton;
}
+ (CCScene*)scene;
- (void)loadGameVarsAsync;
@end
