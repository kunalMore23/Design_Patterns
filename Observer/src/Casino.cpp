#include "../headers/Casino.h"
#include <cmath>
#include <format>

Casino* Casino::casino = nullptr;

Casino::Casino(int blockSize) 
        :   mBlockArray(new int(blockSize)),
            isJackpot(false)
{

}

Casino* Casino::getCasinoMachine(int blockSize = 3)
{
    if(casino)
    {
        return casino;
    }

    casino = new Casino(4);
    return casino;
}

std::string Casino::play()
{
    spin();
    if(isJackpot)
    {
        return "Congratulations, You've Won a Jackpot";
    }

    return "Sorry, no luck.\nPlease try again.\nYour code was Invalid";

}

void Casino::spin()
{
    int jackpotNum = rand();
    if(jackpotNum % 10 == 0)
    {
        isJackpot = true;   
    }
    for(size_t it = 0 ; it< (sizeof(mBlockArray)/sizeof(int)) ; it++)
    {
        mBlockArray[it] = jackpotNum;
    }
}