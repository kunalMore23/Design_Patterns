#pragma once
#include <vector>
#include "Customer.h"
#include "Candy.h"
class Customer;

class CandyShop
{
public:
    CandyShop() = default;
    ~CandyShop() = default;

public:
    void accept();
    bool isOpen();

private:
    void sell();

private:
    bool isStoreOpen;
    std::vector<Customer> mCustomerList;
    std::vector<Candy> mCandyList;
};