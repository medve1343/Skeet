//
//  toughbird.hpp
//  Skeet
//
//  Created by Gergo Medveczky on 2/28/20.
//  Copyright © 2020 Gergo Medveczky. All rights reserved.
//

#ifndef toughbird_h
#define toughbird_h
#include <stdio.h>
#include "bird.h"
#include "velocity.h"
class ToughBird : public Bird
{
private:
public:
    ToughBird(Point tl, Point br);
    void draw();
    int hit();
};
#endif /* toughbird_hpp */
