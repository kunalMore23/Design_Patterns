#include "../headers/ShapeFactory.h"

Circle ShapeFactory::getCircle(double inRadius)
{
    return Circle::make(inRadius);
}