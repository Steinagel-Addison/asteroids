/*************************************************************
 * File: bullet.cpp
 * Author: Addison Steinagel
 *
 * Description: Contains certain method implementations from
 * bullet.h
 *************************************************************/

#include "flyingObject.h"
#include "bullet.h"

#include <iostream>
#include <cmath>
using namespace std;

/*************************************************************
 * CONSTRUCTOR
 *************************************************************/
Bullet :: Bullet()
{
   setAlive(true);
   setPoint(point);
   setVelocity(velocity);
   point.setX( 195);
   point.setY(-195);
}

/************************************************************
 * OTHER METHODS
 *************************************************************/
void Bullet :: kill()
{
   setAlive(false);
}

void Bullet :: draw()
{
   drawDot(point);
}

void Bullet :: fire(Point point, float angle) 
{
   // The following lines are from the skeet project, they will need to be changed:
   setPoint(point);
   velocity.setDx(BULLET_SPEED * ( cos(M_PI / 180.0 * angle)));
   velocity.setDy(BULLET_SPEED * ( sin(M_PI / 180.0 * angle)));
}

void Bullet :: advanceBullets()
{
   if (alive == true)
   {
      point.setX(point.getX() + velocity.getDx());
      point.setY(point.getY() + velocity.getDy());
   }
}