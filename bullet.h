//
//  bullet.h
//  skeet1
//
//  Created by Skylar So on 6/14/19.
//  Copyright © 2019 Skylar So. All rights reserved.
//

#ifndef bullet_h
#define bullet_h

#include "flyingObject.h"


class Bullet : public FlyingObject
{
public:
    Bullet() {};
    
    void fire(Point point, float angle);
    virtual void draw();
    virtual void advance();
    
    
    
private:
    float angle;
    
    
};
#endif /* bullet_h */
