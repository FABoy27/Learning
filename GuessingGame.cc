#include <cstdint>
#include <iostream>

int main()
{
    bool has_won = false;

    std::cout << "Wilkommen zu dem Raten Spiel!"<< std::endl;
    std::cout << "Du musst die Rcihtige Nummer zwischen 0 und 10 herausfinden!"<< std::endl;

    while (!has_won)
    {
        std::uint32_t number; // 0-255
        std::cout << "Bitte gebe deinen Guess ab: ";
        std::cin >> number;

        if( number > 0 && number <= 10) {
            if (number == 4)
            {
                std::cout << "Du hast Gewonnen!\n";
                has_won = true;
            }
            else if (number == 3 ||number == 5)
            {
                std::cout << "Du hast fast gewonnen!\n";
            }
            else
            {
                std::cout << "Du hast verloren! \n";
            }
        }
        else
        {
            std::cout << "Du hast eine falsche Nummer geschrieben!\n";
        }
    }

    return 0;
}
