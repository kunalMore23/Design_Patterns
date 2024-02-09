#pragma once
#include <string>
#include "../headers/CandyShop.h"
class CandyShop;

class Customer
{
public:
    Customer() = default;
    ~Customer() = default;

public:
    void visit(CandyShop candyshop);
    void buy(std::string itemType);
    void leave();
};