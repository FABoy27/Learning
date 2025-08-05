#include <iostream>


int main()
{
    bool is_prime = true;

    unsigned int number = 0;

    std::cout << "Bitte gebe eine unsigned int Nummer ein: ";
    std::cin >> number;

    if (number == 0 || number == 1)
    {
        is_prime = false;
    }

    for (unsigned int i = 2;  i < number; ++i)
    {
        if (number % i == 0)
        {
            is_prime = false;
        }
    }

    if (is_prime)
    {
        std::cout << "Die Zahl " << number << " ist eine Primzahl!" << std::endl;
    }
    else
    {
        std::cout << "Die Zahl " << number << " ist keine Primzahl!" << std::endl;
    }

    return 0;
}
