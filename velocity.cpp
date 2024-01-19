//
//  velocity.cpp
//  Moonlander
//
//  Created by Gergo Medveczky on 2/10/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#include "velocity.h"
Velocity ::Velocity()
{
    setDx(0);
    setDy(0);
}
Velocity ::Velocity(float Dx, float Dy)
{
    setDx(Dx);
    setDy(Dy);
}
//getter for Dx
float Velocity::getDx() const
{
    return Dx;
}

//getter for Dy
float Velocity::getDy() const
{
    return Dy;
}

//setter for Dx
void Velocity::setDx(float Dx)
{
    this -> Dx = Dx;
}

//setter for Dy
void Velocity::setDy(float Dy)
{
    this -> Dy = Dy;
}


