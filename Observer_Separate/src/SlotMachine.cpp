#include "../headers/SlotMachine.h"
#include <cmath>

SlotMachine::SlotMachine()
{

}

void SlotMachine::addObserver(Observer& observer)
{
    observer.addPattern(mJackpotBlockArray);
    mObserverList.push_back(observer);
}
        
void SlotMachine::spin()
{
    mCurrBlockArray[0] = rand() % 3 + 1;
    mCurrBlockArray[1] = rand() % 3 + 1;
    mCurrBlockArray[2] = rand() % 3 + 1;
    mObserverList[0].checkPattern(mCurrBlockArray);
}