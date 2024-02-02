#pragma once
#include <string>
#include "BankAcc.h"

// Class representing a UPI (Unified Payments Interface) for handling money transactions
class UPI
{
public:
    // Static function to get an instance of UPI associated with a BankAcc
    static UPI* getUPI(BankAcc* inBank);
    BankAcc* getBank() const;

    // Function to send money from one bank account to another
    bool sendMoney(double inSendMoney, BankAcc* inBank);
    bool sendMoney(double inSendMoney, UPI* inUpi);

private:
    // Default constructor (private to enforce singleton pattern)
    UPI() = default;

    // Constructor with a BankAcc parameter (private to enforce singleton pattern)
    UPI(BankAcc* mBank);

    // Copy constructor deleted to prevent copying instances
    UPI(UPI& upi) = delete;

    // Default destructor
    ~UPI() = default;

private:
    // Copy assignment operator deleted to prevent copying instances
    UPI& operator=(const UPI& upi) = delete;
    
private:
    // Static pointer to the UPI instance (singleton pattern)
    static UPI* mUpi;

    // Pointer to the associated BankAcc
    BankAcc* mBank = nullptr;
};
