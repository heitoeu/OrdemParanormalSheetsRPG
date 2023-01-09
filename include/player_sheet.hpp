#ifndef PLAYER_SHEET_HPP
#define PLAYER_SHEET_HPP
#include "sheet.hpp"

class PlayerSheet : public Sheet
{
private:
    // Atributos
    std::string player, background, combat_class;
    int nex = 0;

    std::fstream player_file;

    // Funções Privadas
    void getBaseInfo(std::string local);
    void getSkillsInfo();

public:
    PlayerSheet(std::string local);
    ~PlayerSheet();
    void printInfo();
};

#endif