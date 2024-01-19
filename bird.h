//
//  bird.hpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#ifndef bird_h
#define bird_h

#include <stdio.h>
#include "flying.h"
#include "uiDraw.h"
#include <cmath> // used for sin, cos, and M_PI
#define BULLET_SPEED 10.0

class Bird : public Flying
{
protected:
    int hitValue;
public:
    Bird()
    {
        
        
    }
    virtual void draw() =0;
    virtual int hit() = 0;
};
#endif /* bird_hpp */
