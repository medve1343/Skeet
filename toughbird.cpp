//
//  toughbird.cpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#include "toughbird.h"

ToughBird::ToughBird(Point tl, Point br)
{
    hitValue = 3;
    this -> point = Point(tl.getX(), random(br.getY(), tl.getY()));
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

void ToughBird::draw()
{
    drawToughBird(point, 15, hitValue);
}

int ToughBird::hit()
{
    hitValue--;
    if(hitValue==0)
    {
        kill();
        return 3;
    }
    return 1;
}
