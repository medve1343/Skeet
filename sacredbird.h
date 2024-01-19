//
//  sacredbird.hpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#ifndef sacredbird_h
#define sacredbird_h
#include "bird.h"
#include <stdio.h>
#include "velocity.h"
class SacredBird : public Bird
{
private:
    
public:
    SacredBird(Point tl, Point br);
    void draw();
    int hit();
};
#endif /* sacredbird_hpp */
