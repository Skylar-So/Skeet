//
//  flyingObject.h
//  skeet1
//
//  Created by Skylar So on 6/13/19.
//  Copyright © 2019 Skylar So. All rights reserved.
//

#ifndef flyingObject_h
#define flyingObject_h

#include <iostream>
#include "point.h"
#include "uiDraw.h"
#include "velocity.h"
class FlyingObject
{
protected:
    Velocity velocity;
    Point point;
    bool alive;
    int bonus;
    int score;
    int lives;
    
public:
    FlyingObject() : alive(true), score(1), bonus(0), lives(1) {}
    
    
    /*************************************
     * Function: getPoint
     * Description: returns the bird's location
     ************************************/
    Point getPoint() { return point; }
    
    /*********************************************
     * Function: getVelocity
     * Description: returns the bird's velocity
     **********************************/
    Velocity getVelocity() { return velocity; }
    
    /*********************************************
     * Function: getLives
     * Description: Returns if the bird's lives
     *********************************************/
    int getLives() { return lives; }
    
    /*********************************************
     * Function: isAlive
     * Description: Returns if the bird is alive
     ***************************************/
    bool isAlive() { return alive; }
    
    /******************************************
     * Function: setPoint
     * Description: Sets the bird's point
     *********************************/
    void setPoint(Point point) { this->point = point; }
    
    /******************************************
     * Function: setBonus
     * Description: Sets the bird's bonus
     *********************************/
    void setBonus(int bonus) { this->bonus = bonus; }
    
    /****************************************
     * Function: setVelocity
     * Description: Sets the bird's velocity
     ***************************************/
    void setVelocity(Velocity velocity) { this->velocity = velocity; }
    
    /*********************************************
     * Function: setAlive
     * Description: sets the bird to alive
     *********************************************/
    void setAlive(bool alive) { this->alive = alive; }
    
    /*********************************************
     * Function: setLives
     * Description: sets the bird's life
     *********************************************/
    void setLives(int lives) { this->lives = lives; }
    
    /***************************************
     * Function: kill
     * Description: kills the bird
     *************************************/
    void kill() { alive = false; }
    
    virtual void draw() = 0;
    
    virtual void advance();
    
    /*********************************************
     * Function: hit
     * Description: keeps track of bird hits
     *******************************/
    int hit();

};

#endif
