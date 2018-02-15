###############################################################
# Program:
#     Milestone 11, Asteroids
#     Brother Alvey, CS165
# Author:
#     Addison Steinagel
# Summary:
#     This is the first milestone for the asteroids project, to
#     simply have the classes and methods stubbed out and 5 rocks
#     showing up on the display.  I'm using the instructor's code
#     for game.h and game.cpp at this point (from the skeet
#     project), until I understand how to use vectors and 
#     iterators to display 5 rocks a little better.  It simply 
#     compiles and displays a single rock at this point.
#     11/20/2017 Edit: Osvaldo saved me!  He was very helpful on
#     the developer forum.  I implemented his suggestions and now
#     I've got 5 rocks displaying, and moving.  Pedro also helped
#     me to see how this works with some pseudocode.  
#     11/20/2017 Edit: Got the directions random now too.
#     11/27/2017 Edit: I've got my ship rotation working and the
#     bullets are firing in the correct direction with the ship's
#     angle, but I am having trouble getting the ship to accelerate
#     and move around, and I haven't figured out the screen wrapping.
#     11/28/2017 Edit: The rocks are wrapping properly now, I just 
#     need to implement it for my ship and the bullets.  I still can't
#     get the ship to thrust around though.
# Above and Beyond
#     When you submit your final project (not for milestones),
#     list anything here that you did to go above and beyond
#     the base requirements for your project.
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o velocity.o flyingObject.o ship.o bullet.o rocks.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o velocity.o flyingObject.o ship.o bullet.o rocks.o $(LFLAGS)

###############################################################
# Individual files
#    uiDraw.o       Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o   Handles input events
#    point.o        The position on the screen
#    game.o         Handles the game interaction
#    velocity.o     Velocity (speed and direction)
#    flyingObject.o Base class for all flying objects
#    ship.o         The player's ship
#    bullet.o       The bullets fired from the ship
#    rocks.o        Contains all of the Rock classes
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

driver.o: driver.cpp game.h
	g++ -c driver.cpp

game.o: game.cpp game.h uiDraw.h uiInteract.h point.h velocity.h flyingObject.h bullet.h rocks.h ship.h
	g++ -c game.cpp

velocity.o: velocity.cpp velocity.h point.h
	g++ -c velocity.cpp

flyingObject.o: flyingObject.cpp flyingObject.h point.h velocity.h uiDraw.h
	g++ -c flyingObject.cpp

ship.o: ship.cpp ship.h flyingObject.h point.h velocity.h bullet.h uiDraw.h
	g++ -c ship.cpp

bullet.o: bullet.cpp bullet.h flyingObject.h point.h velocity.h uiDraw.h
	g++ -c bullet.cpp

rocks.o: rocks.cpp rocks.h flyingObject.h point.h velocity.h uiDraw.h
	g++ -c rocks.cpp


###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
