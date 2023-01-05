#include "enemy_sheet.hpp"

int main()
{
    // Teste Zumbi de Sangue
    Atributes atributos;
    atributos.setAtributes(2, 1, 0, 2, 1);
    EnemySheet zumbi_sangue("Zumbi 1", atributos, 45, 8, 1);

    std::cout << "Resultado: " << zumbi_sangue.rollAtribute('F') << std::endl;
    return 0;
}