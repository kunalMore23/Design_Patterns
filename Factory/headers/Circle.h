#include "Shape2D.h"
#pragma once

class Circle : protected Shape2D
{
public:
    double radius();

protected:
    static Circle make(double inRadius);

private:
    Circle(double inRadius);

private:
    double mRadius;   
};