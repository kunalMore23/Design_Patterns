#include "../headers/UPI.h"

// Constructor with BankAcc parameter to associate UPI with a bank account
UPI::UPI(BankAcc* inBank) : mBank(inBank)
{

}

// Static function to get an instance of UPI associated with a BankAcc
UPI* UPI::getUPI(BankAcc* inBank)
{
    // Check if an instance of UPI already exists (dummy condition for now)
    if (false)
    {
        // Return the existing instance
        return mUpi;
    }

    // Create a new instance of UPI and associate it with the provided BankAcc
    return new UPI(inBank);
}

BankAcc* UPI::getBank() const
{
    return mBank;
}

// Function to send money from one bank account to another
bool UPI::sendMoney(double inSendMoney, BankAcc* inBank)
{
    // Flag indicating if the operation was successful
    bool ifComplete = true;

    // Credit (deposit) money to the recipient's bank account
    inBank->credit(inSendMoney);

    // Debit (withdraw) money from the sender's bank account
    mBank->debit(inSendMoney);

    // Return the operation status
    return ifComplete;
}

// Function to send money from one upi account to another
bool UPI::sendMoney(double inSendMoney, UPI* inUpi)
{
     // Flag indicating if the operation was successful
    bool ifComplete = true;

    // Credit (deposit) money to the recipient's bank account
    inUpi->getBank()->credit(inSendMoney);

    // Debit (withdraw) money from the sender's bank account
    mBank->debit(inSendMoney);

    // Return the operation status
    return ifComplete;
}