#include "enemy_sheet.hpp"
#include "player_sheet.hpp"

int main()
{
    // Obter tempo atual para num pseudo-aleatorio
    srand(time(nullptr));

    // Teste Player
    PlayerSheet Lycoris("players/Lycoris.txt");

    Lycoris.printInfo();
    Lycoris.printSkills();
    Lycoris.rollSkills("Luta");

    std::cout << "Terminou!" << std::endl;

    return 0;
}