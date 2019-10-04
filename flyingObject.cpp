//
//  flyingObject.cpp
//  skeet1
//
//  Created by Skylar So on 6/13/19.
//  Copyright © 2019 Skylar So. All rights reserved.
//

#include "flyingObject.h"
/************************************************
 * Function: advance()
 * Purpose: Advances the fling object
 *********************************************/
void FlyingObject::advance()
{
    point.addX(velocity.getDx());
    point.addY(velocity.getDy());
}

/*******************************************
 * Function: hit()
 * Purpose: keeps track of hits and kills bird
 *********************************************/
int FlyingObject::hit()
{
    lives--;
    if (lives ==0)
    {
        kill();
        return score + bonus;
    }
    return score;
}

