/*************************************************************
 * File: flyingObject.h
 * Author: Addison Steinagel
 *
 * Description: Basic flying objects.  Both the Rocks class and 
 * the Bullet class will inherit off of this one.
 *************************************************************/

#ifndef flyingObject_h
#define flyingObject_h

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

/*************************************************************
 * FLYING OBJECT
 *************************************************************/
class FlyingObject
{
   public:
      // Constructors
      FlyingObject();
      FlyingObject(Point point);
      
      // Getters (inline)
      Point getPoint()       const        { return point;              }
      Velocity getVelocity() const        { return velocity;           }
      bool isAlive() const                { return alive;              }
      
      // Setters (inline)
      void setPoint(Point point)          { this->point    = point;    }
      void setVelocity(Velocity velocity) { this->velocity = velocity; }
      void setAlive(bool alive)           { this->alive    = alive;    }
      
      // Others
      void advance();
      void wrapX() { point.setX(point.getX() * -1); }
      void wrapY() { point.setY(point.getY() * -1); }
      
   protected:
      Point point;
      Velocity velocity;
      bool alive;
};


#endif /* flyingObject_h */
