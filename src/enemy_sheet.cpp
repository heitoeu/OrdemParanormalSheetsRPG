#include "enemy_sheet.hpp"

EnemySheet::EnemySheet(std::string name, Atributes atributos, int pv, int des, int stauts)
{
    this->name = name;
    this->atributes = atributos;
    this->pv = pv;
    this->des = des;
    this->status = 1;
}
EnemySheet::~EnemySheet() {}