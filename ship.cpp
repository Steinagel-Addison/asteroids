/*************************************************************
 * File: ship.cpp
 * Author: Addison Steinagel
 *
 * Description: Contains the function bodies for the ship class.
 *************************************************************/

#include "ship.h"
#include "point.h"
#include "uiDraw.h"

#include <iostream>
using namespace std;

/**************************************************************
 * CONSTRUCTORS
 **************************************************************/
Ship :: Ship()
{
   
}

Ship :: Ship(Point point)
{
   
}

/**************************************************************
 * OTHERS
 **************************************************************/
void Ship :: draw()
{
   drawShip(point, (angle - 90), true);
}

void Ship :: turnLeft()
{
   angle += ROTATE_AMOUNT;
}

void Ship :: turnRight()
{
   angle -= ROTATE_AMOUNT;
}

void Ship :: accelerate()
{
   velocity.setDx(velocity.getDx() + THRUST_AMOUNT * (-sin(M_PI / 180.0 * angle)));
   velocity.setDy(velocity.getDy() + THRUST_AMOUNT * ( cos(M_PI / 180.0 * angle)));

   // for test purposes
   /*
   velocity.setDy(velocity.getDy() + THRUST_AMOUNT);
   velocity.setDx(velocity.getDx() + THRUST_AMOUNT);
   */
}