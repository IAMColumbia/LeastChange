#include "Game.h"
#include "Coin.h"
#include <iostream>
#include <string>

void Game::Start()
{
    //while(true)
    //{
        double input = 0;
        std::cout << "Type an amount: " << std::endl;
        std::cin >> input;

        std::vector<Coin>* output = Game::GetLeastChange(input);

        for(int i = 0; i < output->size(); i++)
        {
            std::cout << (*output)[i].ToString() << std::endl;
        }
    //}
}

std::vector<Coin>* Game::GetLeastChange(double amount)
{
    std::vector<Coin>* output = new std::vector<Coin>();
    double amountLeft = amount;

    while(amountLeft > 0)
    {
        Coin* coin = Game::GetGreatestCoin(amountLeft);
        output->push_back(*coin);
        amountLeft -= ((double)coin->Value) / 100.0;
    }
    

    return output;
}

Coin* Game::GetGreatestCoin(double amount)
{
    Coin::ValueEnum value = Coin::ValueEnum::Penny;

    if(amount >= 1.00)
    { value = Coin::ValueEnum::DollarCoin; }
    else if(amount >= .25)
    { value = Coin::ValueEnum::Quarter; }
    else if(amount >= .1)
    { value = Coin::ValueEnum::Dime; }
    else if(amount >= .05)
    { value = Coin::ValueEnum::Nickel; }
    else
    { value = Coin::ValueEnum::Penny; }

    return new Coin(value);
}