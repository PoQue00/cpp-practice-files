#include <iostream>
#include <limits>

int main()
{

    for(int i = 1; i <= 3; i++)
    {
        std::cout << i << '\n';
    }

    std::cout << "L" << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}