#include<iostream>
#include <memory>
#include "headers/UPI.h"

int main()
{
    // Create two BankAcc objects for Kunal and Chirag with an initial balance of 3000
    BankAcc* kunal = new BankAcc(3000);
    BankAcc* chirag = new BankAcc(3000);

    // Get UPI instances associated with Kunal and Chirag's bank accounts
    UPI* kunalUPI = UPI::getUPI(kunal);
    UPI* chiragUPI = UPI::getUPI(chirag);

    // Use UPI to send 500 money from Kunal to Chirag
    kunalUPI->sendMoney(500, chirag);
    // Use UPI to send 500 money from KunalUPI to ChiragUPI
    kunalUPI->sendMoney(500, chiragUPI);

    return 0;
}
