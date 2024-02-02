#include <iostream>
#include "headers/CarShowroom.h"

int main()
{
    Car* mercedes = CarShowroom::buyCar();
    mercedes->drive();
    return 0;
}