/*********************************************************************
 * File: game.h
 * Description: Defines the game class for Asteroids
 *
 *********************************************************************/

#ifndef GAME_H
#define GAME_H

#include <vector>

#include "uiDraw.h"
#include "uiInteract.h"
#include "point.h"
#include "velocity.h"
#include "ship.h"

#include "flyingObject.h"
#include "rocks.h"
#include "bullet.h"


#define CLOSE_ENOUGH 15


/*****************************************
 * GAME
 *****************************************/
class Game
{
public:
   /*********************************************
    * Constructor
    *********************************************/
   Game(Point tl, Point br);
   ~Game();
   
   /*********************************************
    * Function: handleInput
    * Description: Takes actions according to whatever
    *  keys the user has pressed.
    *********************************************/
   void handleInput(const Interface & ui);
   
   /*********************************************
    * Function: advance
    * Description: Move everything forward one
    *  step in time.
    *********************************************/
   void advance();
   
   /*********************************************
    * Function: draw
    * Description: draws everything for the game.
    *********************************************/
   void draw(const Interface & ui);
   
   /*********************************************
    * Function: getClosestDistance
    * Description: Determine how close these two objects will
    * get in between the frames.
    *********************************************/
   float getClosestDistance(const FlyingObject &obj1, const FlyingObject &obj2) const;
   
private:
   // The coordinates of the screen
   Point topLeft;
   Point bottomRight;
   
   int score;
   
   Ship ship;
   std::vector<Bullet> bullets;
   std::vector<Rocks>  rock;     // in order to display more than one rock


   /*************************************************
    * Private methods to help with the game logic.
    *************************************************/
   bool isOnScreen(const Point & point);
   void advanceBullets();
   void advanceRock();
   Rocks* createRock();
   
   void handleCollisions();
   void cleanUpZombies();
};


#endif /* GAME_H */
