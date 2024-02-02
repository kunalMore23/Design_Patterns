#include <string>
#pragma once
class Printer
{
    public: 
        //static function for getting object for Printer class
        static Printer* getPrinter();
        //print method for class
        void print(std::string inString);

    private:
        //default constructor
        Printer() = default;
        //copy constructor
        Printer(const Printer& printer) = delete;
        //assignment operator overloading deleted
        Printer& operator=(const Printer&) = delete;

    private:    
        //member printer object pointer
        static Printer* mPrinter;
};