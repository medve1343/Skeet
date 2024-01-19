//
//  flyinh.cpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#include "flying.h"

void Flying :: setPoint(Point point)
{
    this -> point = point;
}

Point Flying :: getPoint() const
{
    return point;
}

void Flying :: setVelocity(Velocity velocity)
{
    this -> velocity = velocity;
}

Velocity Flying :: getVelocity() const
{
    return velocity;
}

bool Flying:: isAlive()
{
    return alive;
}

void Flying :: kill()
{
    alive = false;
}

void Flying::advance()
{
    point.addX(velocity.getDx());
    point.addY(velocity.getDy());
}





