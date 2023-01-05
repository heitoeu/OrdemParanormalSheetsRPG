#include "enemy_sheet.hpp"

EnemySheet::EnemySheet(std::string name, Atributes atributos, int pv, int des, int stauts)
{
    this->name = name;
    this->atributes = atributos;
    this->pv = pv;
    this->des = des;
    this->status = 1;
}

int EnemySheet::rollAtribute(char atribute)
{
    char a = atribute;
    int value = -1;
    switch (a)
    {
    case 'F':
        value = dice.rollBest(D20, atributes.FOR);
        break;
    case 'A':
        value = dice.rollBest(D20, atributes.AGI);
        break;
    case 'I':
        value = dice.rollBest(D20, atributes.INT);
        break;
    case 'V':
        value = dice.rollBest(D20, atributes.VIG);
        break;
    case 'P':
        value = dice.rollBest(D20, atributes.PRE);
        break;
    }

    return value;
}

int EnemySheet::rollSkills(std::string skill) {}