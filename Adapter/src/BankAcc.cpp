#include <iostream>
#include "../headers/BankAcc.h"

// Constructor to initialize the BankAcc with an initial amount
BankAcc::BankAcc(double initialAmount) : mBalance(initialAmount)
{
    
}

// Function to debit (withdraw) money from the account
bool BankAcc::debit(double inDebitMoney)
{
    // Flag indicating if the operation was successful
    bool ifComplete = true;

    // Deduct the specified amount from the balance
    mBalance -= inDebitMoney;

    // Display the updated balance
    std::cout << "Available money is: " << mBalance << std::endl;

    // Return the operation status
    return ifComplete;
}

// Function to credit (deposit) money to the account
bool BankAcc::credit(double inCreditMoney)
{
    // Flag indicating if the operation was successful
    bool ifComplete = true;

    // Add the specified amount to the balance
    mBalance += inCreditMoney;

    // Display the updated balance
    std::cout << "Available money is: " << mBalance << std::endl;

    // Return the operation status
    return ifComplete;
}

// Getter function to retrieve the account number
std::string BankAcc::accNumber() const
{
    return mAccNumber;
}

// Overloaded equality operator to compare two BankAcc objects
bool BankAcc::operator==(const BankAcc bank)
{
    return mAccNumber == bank.accNumber();
}
