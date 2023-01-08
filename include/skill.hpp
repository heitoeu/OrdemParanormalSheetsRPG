#ifndef SKILL_HPP
#define SKILL_HPP
#include <string>
#include <iostream>

class Skill
{
private:
    std::string skill_name;
    int modifier;
    std::string description;
    std::string atribute_modifier;

public:
    Skill();
    ~Skill();

    // Setters
    void setName(std::string name);
    void setModifier(int modify);
    void setDescription(std::string descrip);
    void setAtribute(std::string atribute);

    // Getters
    int getModifier();
    std::string getAtribute();

    // Print
    void printSkill();
};

#endif