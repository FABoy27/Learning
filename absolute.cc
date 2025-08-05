#include <iostream>

int main()
{
    double number; // 0-255
    std::cout << "Please enter your number: ";
    std::cin >> number;

    double abs = number;

    if ( number < 0)
    {
        abs = -1.0 * number ;
    }

    std::cout << "Abs (x) = " << abs << std::endl;

    return 0;
}
