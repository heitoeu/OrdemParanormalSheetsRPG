#include "dice.hpp"
Dice::Dice() {}
Dice::~Dice() {}

std::vector<int> Dice::rollDice(int type, int quantity)
{
    // Vector com as rolagens
    std::vector<int> results;
    // Mostrar as rolagens
    std::stringstream aux;
    aux << "[";

    for (int i = 0; i < quantity; i++)
    {
        int roll = rand() % type + 1;
        results.push_back(roll);

        if (i != quantity - 1) // Não é o último
        {
            aux << roll << ", ";
        }
        else
        {
            aux << roll << "]";
        }
    }
    std::cout << aux.str() << std::endl;
    return results;
}

int Dice::rollBest(int type, int quantity)
{
    std::vector<int> results = rollDice(type, quantity);
    int value = -1;

    for (int v : results)
    {
        if (v > value)
        {
            value = v;
        }
    }

    return value;
}

int Dice::rollSum(int type, int quantity)
{
    std::vector<int> results = rollDice(type, quantity);
    int value = 0;

    for (int v : results)
    {
        value += v;
    }

    return value;
}