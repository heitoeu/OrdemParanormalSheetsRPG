#include "enemy_sheet.hpp"

int main()
{
    // Obter tempo atual para num pseudo-aleatorio
    srand(time(nullptr));

    // Teste Zumbi de Sangue
    Atributes atributos;
    atributos.setAtributes(2, 1, 0, 2, 1);
    EnemySheet zumbi_sangue("Zumbi 1", atributos, 45, 8, 1);
    Skill f, v;
    // Adicionando pericias
    f.setAtribute("VIG");
    f.setModifier(10);
    f.setName("Fortitude");
    f.setDescription("Pericia relacionada a saude de uma pessoa!");

    v.setAtribute("PRE");
    v.setModifier(5);
    v.setName("Vontade");
    v.setDescription("Pericia relacionada a mente de uma pessoa!");

    zumbi_sangue.skills["Fortitude"] = f;
    zumbi_sangue.skills["Vontade"] = v;

    zumbi_sangue.skills["Fortitude"].printSkill();
    zumbi_sangue.rollSkills("Fortitude");

    zumbi_sangue.skills["Vontade"].printSkill();
    zumbi_sangue.rollSkills("Vontade");

    std::cout << "Terminou!" << std::endl;

    return 0;
}