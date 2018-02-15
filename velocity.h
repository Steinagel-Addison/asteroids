/*************************************************************
 * File: velocity.h
 * Author: Addison Steinagel
 *
 * Description: Contains the definition of the velocity class.
 *************************************************************/

#ifndef VELOCITY_H
#define VELOCITY_H

/*************************************************************
 * VELOCITY
 *************************************************************/
class Velocity
{
  public:
   // Constructors
   Velocity();
   Velocity(float dx, float dy);
   
   // Getters
   float getDx() const { return dx; }
   float getDy() const { return dy; }
   
   // Setters
   void setDx(float dx);
   void setDy(float dy);
   
  private:
   float dx;
   float dy;
};


#endif /* velocity_h */
