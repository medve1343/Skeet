//
//  bullet.hpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#ifndef bullet_h
#define bullet_h

#include <stdio.h>
#include "velocity.h"
#include "point.h"
#include "flying.h"
#include "rifle.h"
#include <cmath> // used for sin, cos, and M_PI
#define BULLET_SPEED 10.0

class Bullet : public Flying
{
private:
public:
    Bullet()
    {
        
        
    }
    void draw();
    void fire(Point point, float angle);
};

#endif /* bullet_hpp */
