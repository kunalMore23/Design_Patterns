#pragma once
#include "CarFactory.h"

class CarShowroom
{
public:
    static Car* buyCar();

private:
    static Car*         newCar;
    static CarFactory*  mCarFactory;
};