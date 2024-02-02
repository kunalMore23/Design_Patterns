#include "Circle.h"
#pragma once

class ShapeFactory : protected Circle
{
    public:
        static Circle getCircle(double inRadius);
};