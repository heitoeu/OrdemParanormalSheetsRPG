#include "skill.hpp"

Skill::Skill()
{
    this->skill_name = "NO NAME!";
    this->atribute_modifier = "NO ATRIBUTE SETTED!";
    this->modifier = 0;
    this->description = "NO DESCRIPTION!";
}

Skill::~Skill()
{
}

// Setters
void Skill::setName(std::string name)
{
    this->skill_name = name;
}
void Skill::setModifier(int modify)
{
    this->modifier = modify;
}
void Skill::setDescription(std::string descrip)
{
    this->description = descrip;
}
void Skill::setAtribute(std::string atribute)
{
    this->atribute_modifier = atribute;
}

// Getters
int Skill::getModifier()
{
    return this->modifier;
}
std::string Skill::getAtribute()
{
    return this->atribute_modifier;
}

// Print
void Skill::printSkill()
{
    std::cout << skill_name << "[" << atribute_modifier << "]"
              << "    (+" << modifier << ")" << std::endl;
    std::cout << "'" << description << "'" << std::endl;
}