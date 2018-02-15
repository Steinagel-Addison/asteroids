/*************************************************************
 * File: bullet.h
 * Author: Addison Steinagel
 *
 * Description: Inherits from the Flying Object class
 *************************************************************/

#ifndef bullet_h
#define bullet_h

#include "flyingObject.h"

#define BULLET_SPEED 5
#define BULLET_LIFE 40

/*************************************************************
 * BULLET
 *************************************************************/
class Bullet : public FlyingObject
{
   public:
      // Constructor
      Bullet();
      
      // Other methods
      void kill();
      void draw();
      void fire(Point point, float angle);
      void advanceBullets();
};


#endif /* bullet_h */
