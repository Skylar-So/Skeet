//
//  birds.cpp
//  skeet1
//
//  Created by Skylar So on 6/13/19.
//  Copyright © 2019 Skylar So. All rights reserved.
//

#include "birds.h"

/***********************************************
 * Function: Bird Constructor
 * Purpose: Sets up the bird
 *********************************************/
Bird::Bird()
{
    point.setX(-200.0);
    point.setY(random(-150, 150));
    
    velocity.setDx(random(3, 6));
    
    if (point.getY() >= 0)
    {
        velocity.setDy(random(-4, 0));
    }
    else
    {
        velocity.setDy(random(0, 4));
    }
}

/********************************************
 * Function: Standard_Bird::draw()
 * Purpose: Draws the reg bird
 *********************************************/
void Standard_Bird::draw()
{
    drawCircle(getPoint(), 20);
}

/***********************************************
 * Function: Tough Bird Constructor
 * Purpose: Set perameters of the tough bird functionality
 ******************************************/
Tough_Bird::Tough_Bird()
{
    lives = 3;
    bonus = 2;
    velocity.setDx(random(2, 4));
    
    if (point.getY() >= 0)
    {
        velocity.setDy(random(-3, 0));
    }
    else
    {
        velocity.setDy(random(0, 3));
    }
}

/************************************************
 * Function: Tough_Bird::draw()
 * Purpose: draw the tough bird
 ********************************************/
void Tough_Bird::draw()
{
    drawToughBird(getPoint(), 15, 3);
}

/********************************************
 * Function: Sacred_Bird::draw
 * Purpose: Draws the sacred bird
 ********************************************/
void Sacred_Bird::draw()
{
    drawSacredBird(getPoint(), 15);
}

/***********************************************
 * Function: Super Bird Constructor
 * Purpose: Set perameters of the super bird functionality
 ******************************************/
Super_Bird::Super_Bird()
{
    lives = 10;
    bonus = 10;
    velocity.setDx(random(0, 3));
    
    if (point.getY() >= 0)
    {
        velocity.setDy(random(-5, 0));
    }
    else
    {
        velocity.setDy(random(0, 5));
    }
}

/********************************************
 * Function: Super_Bird::draw
 * Purpose: Draws the super bird
 ********************************************/
void Super_Bird::draw()
{
    drawSmallAsteroid(getPoint(), 15);
}
