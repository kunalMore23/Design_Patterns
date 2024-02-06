#pragma once
#include "Observer.h"
#include <vector>

class SlotMachine
{
    public:
        SlotMachine();
        ~SlotMachine() = default;

    public:
        void addObserver(Observer& observer);
        void spin();

    private:
        int mCurrBlockArray[3]      {0, 0, 0};
        int mJackpotBlockArray[3]   {3, 3, 3};
        std::vector<Observer> mObserverList;
};