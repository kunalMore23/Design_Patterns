#include "../headers/CarFactory.h"

Car* CarFactory::getCar(Color* inCarColor, Engine* inEngineType)
{
    return new Car();
}