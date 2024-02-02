#include<iostream>
#include "headers/ShapeFactory.h"

int main()
{
    Circle circle = ShapeFactory::getCircle(5.0);
    std::cout<<circle.radius()<<std::endl;
    return 0;
}