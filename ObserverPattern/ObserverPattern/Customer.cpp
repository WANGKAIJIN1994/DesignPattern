#include <iostream>
#include "Customer.h"

namespace ObserverPattern
{
Customer::Customer(const std::string& name) : name_(name)
{
}

void Customer::receive(const std::string& name)
{
    std::cout << name_ << " received, i will to buy goods : " << name << std::endl;
}
}
