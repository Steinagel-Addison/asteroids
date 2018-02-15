/*************************************************************
 * File: rocks.h
 * Author: Addison Steinagel
 *
 * Description: Inherits from the Flying Object class.
 *************************************************************/

#ifndef rocks_h
#define rocks_h

#include "flyingObject.h"

#define BIG_ROCK_SIZE 16
#define MEDIUM_ROCK_SIZE 8
#define SMALL_ROCK_SIZE 4

#define BIG_ROCK_SPIN 2
#define MEDIUM_ROCK_SPIN 5
#define SMALL_ROCK_SPIN 10

/*************************************************************
 * ROCKS
 *************************************************************/
class Rocks : public FlyingObject
{
   public:
      // Constructor
      Rocks();
      Rocks(Point point, Velocity velocity);
      
      // Getter
      int getRotation() { return rotation; }
      
      // Setter
      void setRockType();
      void setRotation(int rotation) { this->rotation = rotation; }
      
      // Other Methods
      void kill();
      void draw();
      int  hit() const;
      void advance();
      
   protected:
      int rockType;  // 1 = BigRock, 2 = MediumRock, 3 = SmallRock
      int rotation;
};

/*************************************************************
 * CHILD ROCK CLASSES
 *************************************************************/
class BigRock : public Rocks
{
   BigRock() : Rocks() {}
};

class MediumRock : public Rocks
{
   MediumRock() : Rocks() {}
};

class SmallRock : public Rocks
{
   SmallRock() : Rocks() {}
};


#endif /* rocks_h */
