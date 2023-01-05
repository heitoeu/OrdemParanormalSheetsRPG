#ifndef SKILL_HPP
#define SKILL_HPP
#include <string>

class Skill
{
private:
    std::string skill_name;
    int modifier;
    std::string description;

public:
    Skill(/* args */);
    ~Skill();
};

#endif