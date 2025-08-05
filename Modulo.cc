#include <cstdint>
#include <iostream>

int main()
{
    std::uint32_t number; // 0-255
    std::cout << "Please enter your guess: ";
    std::cin >> number;

    if( number > 0 && number <= 10) {
        if (number == 4)
        {
            std::cout << "Du hast Gewonnen!\n";
        }
        else if (number % 2 == 0)
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

    return 0;
}
