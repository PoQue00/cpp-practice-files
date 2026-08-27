#include <iostream>
#include <limits>
#include <ctime>

int main()
{
    
    srand(time(0));

    int RandNum = rand() % 10 + 1;

    switch(RandNum)
    {
        case 1: std::cout << "Your number was 1\n";
                break;
        case 2: std::cout << "Your number was 2\n";
                break;
        case 3: std::cout << "Your number was 3\n";
                break;
        case 4: std::cout << "Your number was 4\n";
                break;
        case 5: std::cout << "Your number was 5\n";
                break;
        case 6: std::cout << "Your number was 6\n";
                break;
        case 7: std::cout << "Your number was 7\n";
                break;
        case 8: std::cout << "Your number was 8\n";
                break;
        case 9: std::cout << "Your number was 9\n";
                break;
        case 10: std::cout << "Your number was 10\n";
                break;
    }

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}