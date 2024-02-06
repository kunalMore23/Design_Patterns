#pragma once
#include <string>

class Casino
{
    public:
        static Casino * getCasinoMachine(int blockSize);
        std::string play();

    private:
        Casino(int blockSize);
        void spin();

    private:
        bool    isJackpot;
        int*    mBlockArray;
        static  Casino* casino;
};