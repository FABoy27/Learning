#include <cstdint>
#include <iostream>

std::int32_t user_input()
{
    std::int32_t number = 0;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    return number;
}

bool is_even(std::int32_t number)
{
    if(number % 2 == 0)
    {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    std::int32_t n1 = user_input();
    std::cout << is_even(n1) << "\n";
    std::cout << " you can check if its an even number with the number above";
    return 0;
}
