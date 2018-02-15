/*************************************************************
 * File: rocks.cpp
 * Author: Addison Steinagel
 *
 * Description: Contains certain method implementations from 
 * rocks.h
 *************************************************************/

#include "flyingObject.h"
#include "rocks.h"

#include <iostream>
using namespace std;

/*************************************************************
 * CONSTRUCTORS
 *************************************************************/
Rocks :: Rocks()
{
   setAlive(true);
   setPoint(point);
   setVelocity(velocity);
   setRockType();
   setRotation(rotation);
   point.setY(random(-200, 200));
   point.setX(random(-200, 200));
   velocity.setDx(random(-10, 10));
   velocity.setDy(random(-10, 10));
}

Rocks :: Rocks(Point point, Velocity velocity)
{
   setAlive(true);
   setPoint(point);
   setVelocity(velocity);
   setRockType();
   setRotation(rotation);
   point.setY(random(-200, 200));
   point.setX(random(-200, 200));
   velocity.setDx(random(-10, 10));
   velocity.setDy(random(-10, 10));
}

/*************************************************************
 * SETTER
 *************************************************************/
void Rocks :: setRockType()
{

}

/*************************************************************
 * OTHER METHODS
 *************************************************************/
void Rocks :: kill()
{

}

void Rocks :: draw()
{
   drawLargeAsteroid(point, 3);
}

int Rocks :: hit() const
{


   return 0;
}

void Rocks :: advance()
{
   if (alive == true)
   {
      point.setX(point.getX() + velocity.getDx());
      point.setY(point.getY() + velocity.getDy());
   }
}



































