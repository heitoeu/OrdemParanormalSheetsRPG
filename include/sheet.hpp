#ifndef SHEET_HPP
#define SHEET_HPP
#include "dice.hpp"

struct Atributes
{
    int FOR, AGI, INT,
        VIG, PRE;

    void setAtributes(int f, int a, int i, int v, int p);
};

class Sheet
{
protected:
    std::string name;
    Atributes atributes;
    int pv, des, status;
    Dice dice;

public:
    virtual int rollAtribute(char atribute) = 0;
    virtual int rollSkills(std::string skill) = 0;
    void setStatus(int status);
};

#endif