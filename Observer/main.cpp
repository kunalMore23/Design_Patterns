#include <iostream>
#include "headers/Casino.h"

int main()
{
    Casino* casino = Casino::getCasinoMachine(3);
    std::cout<<casino->play();
    return 0;
}