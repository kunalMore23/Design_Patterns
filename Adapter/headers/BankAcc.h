#pragma once

#include <string>

// Class representing a bank account
class BankAcc
{   
public:
    // Constructor to initialize the bank account with an initial amount
    BankAcc(double initialAmount);

    // Getter function to retrieve the account number
    std::string accNumber() const;

protected:
    // Function to debit (withdraw) money from the account
    bool debit(double inDebitMoney);

    // Function to credit (deposit) money to the account
    bool credit(double inCreditMoney);

    // Overloaded equality operator to compare two BankAcc objects
    bool operator==(const BankAcc bank);

private:
    // Declare UPI class as a friend to allow access to private members
    friend class UPI;

    // Private member variable to store the account number
    std::string mAccNumber;

    // Private member variable to store the account balance
    double mBalance;
};
