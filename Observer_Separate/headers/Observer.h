#pragma once

class Observer
{
    public:
        Observer();
        ~Observer() = default;

        void addPattern(int* inJackpotPatternArray);
        void checkPattern(int* inPatternArray);

    private:
        int* mJackpotPatternArray;
};