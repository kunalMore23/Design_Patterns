#include <iostream>
#include "headers/CandyShop.h"

int main()
{
    Customer customer;
    CandyShop candyshop;

    customer.visit(candyshop);
    customer.buy("mentos");
    customer.leave();
    
    return 0;
}