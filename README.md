# Climbers and Playtomic
Climbers, the open source game by Sergey Tikhonov is now integrated with Playtomic's analytics. Game developers, feel free to use this example to integrate Playtomic's APIs into your game.

## Integrated so far
- Custom metrics
- Level metrics
- Heatmaps
- Basic GameVars

## Metrics being tracked
- Game Intro Menu : "Play", "More games" and "Source code" button
- Levels : Begins, Fails, Restarts, Percentage of stars collected
- Heatmaps : Snap positions of the climbers, in all 15 levels

Tip: after cloning the project, search for all "Playtomic" instances in Game.m, to see how we did it.
 
## LIVE DATA
View the public [dashboard][1]

## Heatmap Example, from Level 10
![Heatmap](http://i.imgur.com/URxHF.png)

Notice how we can study the player's movement based on where they tend to snap the climbers. Combined with level metrics, we can design better levels!

## Basic GameVars Example
- Applied to the vertical velocity of the rock falling down
![Gamevar1](http://i.imgur.com/0v6sR.png)

- The admin can tweak the variable in Playtomic's dashboard.
- This velocity is retrieved from Playtomic's servers at the start of every level (check Game.m)
- More use cases: store all kinds of variables to test, including difficulty, no of stars to generate per level, randomness of rock alerts, etc. Can be evolved into AB/multivariate testing.

## Future implementations ( which you can do yourselves, by reading the [iOS documentation][3] )
- Game leaderboards
- Player generated levels
- More complex game variables 

## Lastly, have lotsa fun making games!

[1]: http://playtomic.com/dashboard/overview/5139
[2]: http://haqu.net/
[3]: http://playtomic.com/api/ios