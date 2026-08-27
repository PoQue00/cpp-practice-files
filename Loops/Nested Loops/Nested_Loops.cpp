#include <iostream>
#include <limits>

int main()
{

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows: ";
    std::cin >> rows;

    std::cout << "How many columns: ";
    std::cin >> columns;

    std::cout << "What symbol: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
    {
        std::cout << symbol;
    }
    std::cout << '\n';
    }

    std::cout << '\n';
    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}