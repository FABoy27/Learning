#include <iostream>
#include <algorithm>
#include <windows.h>
#include <cstdlib>
#include <ctime>

void cooldown()
{
    std::cout << "3" << "\n \n";
    Sleep(1000);
    std::cout << "2" << "\n \n";
    Sleep(1000);
    std::cout << "1" << "\n \n";
    Sleep(1000);
    std::cout << "0" << "\n \n";
}

std::string random()
{
    std::string Items[3] = {"Schere", "Stein", "Papier"};

    static bool initialisiert = false;
    if (!initialisiert) {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        initialisiert = true;
    }

    int zufall = std::rand() % 3;
    return Items[zufall];
}

int winnerCheck(std::string player, std::string pc)
{
    std::transform(pc.begin(), pc.end(), pc.begin(), ::tolower);

    if(player == pc) {
        std::cout << "Ihr habt beide das gleiche genommen! \n";

        return 0;
    };

    if( (player == "schere" && pc == "papier") ||
        (player == "papier" && pc == "stein") ||
        (player == "stein" && pc == "schere"))
    {
        std::cout << "Du hast diese runde gewonnen! \n";

        return 1;
    }
    else
    {
        std::cout << "Der Pc hat diese Runde gewonnen! \n";
        return 2;
    }
}

int main()
{
    int playerWins = 0;
    int pcWins = 0;
    int neededWins = 3;
    do
    {
        std::string input;

        std::cout << "Gebe Schere/Stein/Papier ein: \n";
        std::cin >> input;
        std::transform(input.begin(), input.end(), input.begin(), ::tolower);

        if(input == "schere" || input == "stein" || input == "papier")
        {
            cooldown();
            std::string randomPick = random();
            std::cout << "Der PC hat " << randomPick << " genommen \n\n";
            int winner = winnerCheck(input, randomPick);

            if(winner == 1 ) {
                playerWins++;
            }
            else if (winner == 2)
            {
                pcWins++;
            }

            std::string score = (playerWins > pcWins) ? "Dich" : " den PC";

            std::cout << "Es steht " << playerWins << "/" << pcWins << " fuer " << score << "\n\n";

            if(playerWins != pcWins && (playerWins >= neededWins ||  pcWins >= neededWins))
            {
                std::string gameWinner = (playerWins > pcWins) ? "Du hast gewonnen" : "Der PC hat gewonnen";
                std::cout << gameWinner << std::endl;
                Sleep(6000);
                break;
            }
        }
        else
        {
            std::cout << "Du musst Schere, Stein oder Papier eingeben!" << std::endl;
            break;
        };

    }while(true);

    return 0;
}
