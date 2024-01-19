//
//  standardbird.hpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#ifndef standardbird_hpp
#define standardbird_hpp
#include "bird.h"
#include <stdio.h>
#include "velocity.h"
#include "point.h"
class StandardBird : public Bird
{
private:
    
public:
    StandardBird(Point tl, Point br);
    void draw();
    int hit();
};
#endif /* standardbird_hpp */
