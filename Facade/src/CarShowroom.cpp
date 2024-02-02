#include "../headers/CarShowroom.h"

CarFactory* CarShowroom::mCarFactory = nullptr;
Car* CarShowroom::newCar = nullptr;

Car* CarShowroom::buyCar()
{
    mCarFactory             = new CarFactory();
    Color*  carColor        = new Color(1.0f, 1.0f, 1.0f);
    Engine* engineType      = new Engine();

    newCar = mCarFactory->getCar(carColor, engineType);
    return newCar;
}