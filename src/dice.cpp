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
    if (quantity > 0)
    {
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
    }
    else
    {
        // Roda o dado duas vezes para pegar o pior na próxima função
        int roll = -1;
        roll = rand() % type + 1;
        results.push_back(roll);
        aux << roll << ", ";
        roll = rand() % type + 1;
        results.push_back(roll);
        aux << roll << "]";
    }

    std::cout << aux.str() << std::endl;
    return results;
}

int Dice::rollBest(int type, int quantity)
{
    std::vector<int> results = rollDice(type, quantity);
    int value = -1;
    if (quantity > 0)
    {
        int value_max = -1000;
        for (int v : results)
        {
            if (v > value_max)
            {
                value_max = v;
            }
        }
        value = value_max;
    }
    else
    {
        int value_min = 1000;
        for (int v : results)
        {
            if (v < value_min)
            {
                value_min = v;
            }
        }
        value = value_min;
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