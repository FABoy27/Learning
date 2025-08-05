#include <iostream>

// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.
// The variable a should be a double

int main()
{
    double side_lenght = 0.0;
    std::cout << "Please Enter the side lenght of your square: ";
    std::cin >> side_lenght;

    double perimeter = side_lenght * 4;
    double area = side_lenght * side_lenght;

    std::cout << "The perimeter is: " << perimeter << " cm." << std::endl;
    std::cout << "The area is: " << area << " cm." << std::endl;

    return 0;
}
