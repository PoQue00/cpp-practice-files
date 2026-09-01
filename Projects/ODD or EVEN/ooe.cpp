#include <iostream>

int main()
{

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    number % 2 ? std::cout << "Odd Number" << '\n' : std::cout << "Even Number" << '\n';
    
    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}