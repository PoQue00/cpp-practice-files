#include <iostream>
#include <limits>

int main()
{

    for(int i = 1; i <= 15; i++)
    {
        if(i == 13){
            break;
        }
        std::cout << i << '\n';
    }


    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}