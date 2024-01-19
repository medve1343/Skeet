//
//  bullet.cpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#include "bullet.h"
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"



void Bullet :: draw()
{
    drawDot(point);
}

void Bullet :: fire(Point point, float angle)
{
    setPoint(point);
    
    float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
    float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));
    
    velocity.setDx(dx);
    velocity.setDy(dy);
}




