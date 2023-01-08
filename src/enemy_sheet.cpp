#include "enemy_sheet.hpp"

EnemySheet::EnemySheet(std::string name, Atributes atributos, int pv, int des, int stauts)
{
    this->name = name;
    this->atributes = atributos;
    this->pv = pv;
    this->des = des;
    this->status = 1;
}

int EnemySheet::rollAtribute(std::string atribute)
{
    std::string a = atribute;
    int value = -1;

    if (atribute == "FOR")
    {
        value = dice.rollBest(D20, atributes.FOR);
    }
    else if (atribute == "AGI")
    {
        value = dice.rollBest(D20, atributes.AGI);
    }
    else if (atribute == "INT")
    {
        value = dice.rollBest(D20, atributes.INT);
    }
    else if (atribute == "VIG")
    {
        value = dice.rollBest(D20, atributes.VIG);
    }
    else if (atribute == "PRE")
    {
        value = dice.rollBest(D20, atributes.PRE);
    }
    else
    {
        std::cout << "Problema com atributos na rolagem" << std::endl;
    }

    return value;
}

int EnemySheet::rollSkills(std::string skill)
{
    int modifier = skills[skill].getModifier();
    std::string atribute_skill = skills[skill].getAtribute();

    // Rolando o dado
    int value = rollAtribute(atribute_skill);

    // Mostrando na tela o resultado
    std::cout << "[" << value << "]+" << modifier << " = " << value + modifier << std::endl;

    return value + modifier;
}