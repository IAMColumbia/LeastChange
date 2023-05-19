#pragma once
#include <vector>
#include "Coin.h"

class Game
{
    public:
        void Start();
    private:
        std::vector<Coin>* GetLeastChange(double amount);
        Coin* GetGreatestCoin(double amount);
};