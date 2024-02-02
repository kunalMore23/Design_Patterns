#pragma once
#include "Engine.h"
#include "Chasis.h"

class Car
{
    public:
        void drive();
    private:
        Engine* mCarEngine;
        Chasis* mChasis;
};