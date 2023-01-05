#ifndef DICE_HPP
#define DICE_HPP

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

// Faces dos dados
#define D4 4
#define D6 6
#define D8 8
#define D10 10
#define D12 12
#define D20 20

class Dice
{
private:
public:
    Dice();
    ~Dice();
    std::vector<int> rollDice(int type, int quantity);
    int rollBest(int type, int quantity);
    int rollSum(int type, int quantity);
};

#endif