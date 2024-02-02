#include "../headers/Circle.h"

Circle::Circle(double inRadius) : mRadius(inRadius)
{

}

Circle Circle::make(double inRadius)
{
    return Circle(inRadius);
}

double Circle::radius()
{
    return mRadius;
}