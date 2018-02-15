/*************************************************************
 * File: ship.h
 * Author: Addison Steinagel
 *
 * Description: Defines a Ship.
 *************************************************************/

#ifndef ship_h
#define ship_h

#include "point.h"
#include "velocity.h"
#include "bullet.h"

#define SHIP_SIZE 10

#define ROTATE_AMOUNT 6
#define THRUST_AMOUNT 0.5

/**************************************************************
 * SHIP
 **************************************************************/
class Ship
{
   public:
      Ship();
      Ship(Point point);
      
      /****************
       * Getters
       ****************/
      float    getAngle()    const { return angle;    }
      Point    getPoint()    const { return point;    }
      Velocity getVelocity() const { return velocity; }
      
      /****************
       * Setters
       ****************/
      void setPoint   (Point point)       { this->point = point;       }
      void setAngle   (float angle)       { this->angle = angle;       }
      void setVelocity(Velocity velocity) { this->velocity = velocity; }
      
      /****************
       * Others
       ****************/
      void draw();
      void turnLeft();
      void turnRight();
      void accelerate();
      
   protected:
      float angle;
      Point point;
      Velocity velocity;
};


#endif /* ship_h */
