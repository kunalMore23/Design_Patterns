#include <iostream>
#include "headers/Printer.h"

int main()
{
    Printer* printer = Printer::getPrinter();
    printer->print("Hello Dinesh");
    return 0;
}