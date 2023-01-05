#include "sheet.hpp"

void Atributes::setAtributes(int f, int a, int i, int v, int p)
{
    this->FOR = f;
    this->AGI = a;
    this->INT = i;
    this->VIG = v;
    this->PRE = p;
}

void Sheet::setStatus(int status)
{
    this->status = status;
}
