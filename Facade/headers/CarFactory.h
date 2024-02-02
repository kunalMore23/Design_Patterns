#pragma once
#include "Car.h"
#include "EngineDep.h"
#include "Customizer.h"
#include "Chasis.h"

class CarFactory
{
    public:
        Car* getCar(Color* inCarColor, Engine* inEngineType);

    private:
        EngineDep* mEngineDepartment; 
};