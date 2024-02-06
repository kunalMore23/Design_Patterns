#include "headers/SlotMachine.h"
#include <iostream>
#include <ctime>

int main()
{
    std::srand(time(0));
    Observer observer;
    
    SlotMachine slotMachine;
    
    slotMachine.addObserver(observer);

    slotMachine.spin();

    return 0;
}