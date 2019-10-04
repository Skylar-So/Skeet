//
//  birds.h
//  skeet1
//
//  Created by Skylar So on 6/13/19.
//  Copyright © 2019 Skylar So. All rights reserved.
//

#ifndef birds_h
#define birds_h

#include "flyingObject.h"


/***********************************************
 * Function: Bird Class
 * Purpose: Base bird object
 **********************************************/
class Bird : public FlyingObject
{
public:
    Bird();
    
};

/***********************************************
 * Function: Standard Class
 * Purpose: Standard bird object
 *****************************************/
class Standard_Bird : public Bird
{
public:
    Standard_Bird() {}
    virtual void draw();
    virtual void advance(Bird & standard_bird) {};
};

/****************************************
 * Function: Tough Bird Class
 * Purpose: Tough bird object
 ********************************************/
class Tough_Bird : public Bird
{
public:
    Tough_Bird();
    virtual void draw();
    virtual void advance(Bird & t_bird) {};
};


class Super_Bird : public Bird
{
public:
    Super_Bird();
    virtual void draw();
    virtual void advance(Bird & super_bird) {};
};

/******************************************
 * Function: Sacred Bird Class
 * Purpose: Sacred bird object
 *******************************************/
class Sacred_Bird : public Bird
{
public:
    Sacred_Bird() { bonus = -11; }
    virtual void draw();
    virtual void advance(Bird & sacred_bird) {};
};


#endif
