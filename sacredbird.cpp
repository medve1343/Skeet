//
//  sacredbird.cpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#include "sacredbird.h"
SacredBird::SacredBird(Point tl, Point br)
{
    this ->point = Point(tl.getX(), random(br.getY(), tl.getY()));
    if (point.getY() >= 0)
    {
    velocity.setDy(random(-4,1));
    }
    else if (point.getY() < 0)
    {
    velocity.setDy(random(1,4));
    }
    velocity.setDx(random(1,3));
}

void SacredBird::draw()
{
    drawSacredBird(point, 10);
}

int SacredBird::hit()
{
    kill();
    return -10;
}
