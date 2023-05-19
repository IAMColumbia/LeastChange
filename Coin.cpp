#include "Coin.h"

Coin::Coin(Coin::ValueEnum value)
{
    Value = value;
}

std::string Coin::ToString()
{
    switch (Value)
    {
    case Coin::ValueEnum::Penny:
        return "Penny";
    case Coin::ValueEnum::Nickel:
        return "Nickel";
    case Coin::ValueEnum::Dime:
        return "Dime";
    case Coin::ValueEnum::Quarter:
        return "Quarter";
    case Coin::ValueEnum::DollarCoin:
        return "DollarCoin";
    }

    return "Null";
}