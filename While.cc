#include <cstdint>
#include <iostream>

int main()
{
    std::int32_t sum = 0;

    do
    {
        std::cout << "Current Sum: " << sum << " Enter the next Value: ";
        std::int32_t input = 0;
        std::cin >> input;

        if (input < 0)
        {
            std::cout << "Canceled";
            continue;;
        }

        sum += input;
    }while (true);

}
