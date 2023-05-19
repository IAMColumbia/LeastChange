#pragma once
#include <string>

class Coin
{
    public:
        enum ValueEnum
        {
            Penny = 1,
            Nickel = 5,
            Dime = 10,
            Quarter = 25,
            DollarCoin = 100
        };
        
        ValueEnum Value;

        Coin(Coin::ValueEnum value);

        std::string ToString();
};