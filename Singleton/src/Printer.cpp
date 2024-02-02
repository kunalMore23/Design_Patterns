#include <iostream>
#include "../headers/Printer.h"

Printer* Printer::mPrinter = nullptr;

Printer* Printer::getPrinter()
{
    if (mPrinter)
    {
        return mPrinter;
    }
    else
    {
        mPrinter = new Printer();
        return mPrinter;
    }
}

void Printer::print(std::string inString)
{
    std::cout<<inString<<std::endl;
}