#include <iostream>
#include <limits>

int main()
{

    int number;

    do
    {
        std::cout << "Enter  positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}