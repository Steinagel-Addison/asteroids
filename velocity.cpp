/*************************************************************
 * File: velocity.cpp
 * Author: Addison Steinagel
 *
 * Description: Contains the implementations of the
 *  method bodies for the velocity class.
 *************************************************************/
 
#include "velocity.h"

#include <iostream>
using namespace std;

/*************************************************************
 * CONSTRUCTORS
 *************************************************************/
Velocity :: Velocity()
{
   dx = 0;
   dy = 0;
}

Velocity :: Velocity(float dx, float dy)
{
   this->dx = dx;
   this->dy = dy;
}

/*************************************************************
 * SETTERS
 *************************************************************/
void Velocity :: setDx(float dx)
{
   this->dx = dx;
}

void Velocity :: setDy(float dy)
{
   this->dy = dy;
}