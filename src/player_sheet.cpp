#include "player_sheet.hpp"

PlayerSheet::PlayerSheet(std::string local)
{
    // player_file.open(local);
    getBaseInfo(local);
}

PlayerSheet::~PlayerSheet()
{
}

void PlayerSheet::getBaseInfo(std::string local)
{
    std::string temp;

    // Abrindo ficha rudimentar
    std::ifstream createCharacter;
    createCharacter.open(local);

    // Pegando nome do personagem
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp);
    this->name = temp;

    // Pegando nome do jogador
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp);
    this->player = temp;

    // Pegando origem do jogador
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp);
    this->background = temp;

    // Pegando classe do jogador
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp);
    this->combat_class = temp;

    // Pegando NEX do jogador
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp);
    this->nex = std::stoi(temp);

    // Pegando Atributos do jogador
    // FOR
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp, ' ');
    this->atributes.FOR = std::stoi(temp);
    // AGI
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp, ' ');
    this->atributes.AGI = std::stoi(temp);
    // INT
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp, ' ');
    this->atributes.INT = std::stoi(temp);
    // VIG
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp, ' ');
    this->atributes.VIG = std::stoi(temp);
    // PRE
    getline(createCharacter, temp, ' ');
    getline(createCharacter, temp);
    this->atributes.PRE = std::stoi(temp);

    // Adicionando perícias base
    getline(createCharacter, temp);
    getSkillsInfo();

    /*
        //! Novas pericias e adicionar modificadores
        while (!createCharacter.eof())
        {
        }
    */
}

void PlayerSheet::getSkillsInfo()
{
    std::ifstream skillsFile;
    std::string name, temp;
    skillsFile.open("lib/skills/PericiasBase.txt");

    while (!skillsFile.eof())
    {
        // Criando Skill
        Skill skill_temp;
        getline(skillsFile, name, ' ');
        skill_temp.setName(name);
        getline(skillsFile, temp, '[');
        getline(skillsFile, temp, ']');
        skill_temp.setAtribute(temp);
        getline(skillsFile, temp);
        getline(skillsFile, temp);
        skill_temp.setDescription(temp);
        skill_temp.setModifier(0);

        skills[name] = skill_temp;
    }
}

void PlayerSheet::printInfo()
{
    std::cout << "FOR: " << this->atributes.FOR << std::endl;
    std::cout << "AGI: " << this->atributes.AGI << std::endl;
    std::cout << "PRE: " << this->atributes.PRE << std::endl;
    std::cout << "INT: " << this->atributes.INT << std::endl;
    std::cout << "VIG: " << this->atributes.VIG << std::endl;
}