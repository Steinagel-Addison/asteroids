/*************************************************************
 * File: flyingObject.cpp
 * Author: Addison Steinagel
 *
 * Description: Contains the implementation of certain methods
 * within the Flying Object class.
 *************************************************************/

#include "flyingObject.h"
#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

#include <iostream>
using namespace std;

/*************************************************************
 * CONSTRUCTOR
 *************************************************************/
FlyingObject :: FlyingObject()
{
   setAlive(true);
}
 
/************************************************************
 * OTHER METHODS
 *************************************************************/
void FlyingObject :: advance()
{
   if (alive == true)
   {
      point.setX(point.getX() + velocity.getDx());
      point.setY(point.getY() + velocity.getDy());
   }
}
