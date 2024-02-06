#include "../headers/Observer.h"
#include <iostream>

Observer::Observer() : mJackpotPatternArray(new int[3])
{
}

void Observer::addPattern(int *inJackpotPatternArray)
{
    mJackpotPatternArray = inJackpotPatternArray;
}

void Observer::checkPattern(int *inPatternArray)
{
    if (mJackpotPatternArray[0] == inPatternArray[0] && mJackpotPatternArray[1] == inPatternArray[1] && mJackpotPatternArray[2] == inPatternArray[2])
    {
        std::cout << "Congratulations, You've Won the Jackpot.\n";
        std::cout << "The Jackpot code is : \n"
                  << mJackpotPatternArray[0] << "\t" << mJackpotPatternArray[1] << "t" << mJackpotPatternArray[2] << std::endl;
        return;
    }

    std::cout << "Uffff, You Missed by a Small Margin.\nPlease Try Again.\n";
    std::cout << "Your code is : \n"
                  << inPatternArray[0] << "\t" << inPatternArray[1] << "\t" << inPatternArray[2] << std::endl;
    std::cout << "The Jackpot code is : \n"
                  << mJackpotPatternArray[0] << "\t" << mJackpotPatternArray[1] << "\t" << mJackpotPatternArray[2] << std::endl;
}