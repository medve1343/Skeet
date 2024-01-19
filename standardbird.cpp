//
//  standardbird.cpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#include "standardbird.h"
StandardBird::StandardBird(Point tl, Point br)
{
    this -> point = Point(tl.getX(), random(br.getY(),tl.getY()));
    //if (point.getY() < 0)
    if (point.getY() >= 0)
    {
    velocity.setDy(random(-4,-1));
    }
    else if (point.getY() < 0)
    {
    velocity.setDy(random(1,4));
    }
    velocity.setDx(random(3,6));

}

int StandardBird::hit()
{
    kill();
    return 1;
}
void StandardBird::draw()
{
    drawCircle(point, 15);
}

