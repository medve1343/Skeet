//
//  flyinh.hpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#ifndef flying_h
#define flying_h
#include "point.h"
#include "velocity.h"
#include <stdio.h>
class Flying
{
protected:
    Point point;
    Velocity velocity;
    bool alive;
public:
    Flying()
    {
        alive = true;
    }
    void setPoint(Point point);
    Point getPoint() const;
    void setVelocity(Velocity velocity);
    Velocity getVelocity() const;
    bool isAlive();
    void kill();
    void advance();
    
    
};
#endif /* flyinh_hpp */
