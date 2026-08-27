#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <string>

int main(){
    
    srand(time(NULL));

    int mod;
    std::string done;
    std::string roll_again;

    std::cout << "How many sides on your dice: ";
    std::cin >> mod;
    int num = (rand() % mod) + 1;
    std::cout << num << '\n';
    std::cout << "Roll again (y/n)? ";
    std::cin >> roll_again;

    if(roll_again == "y" || roll_again == "Y")
    {
        int num = (rand() % mod) + 1;
        std::cout << num << '\n';
    }
    else if(roll_again == "n" || roll_again == "N")
    {
        std::cout << "Exit programm (y/n)? ";
        std::cin >> done;
    }
    if(done == "y" || done == "Y")
    {
        return 0;
    }
    else if(done == "n" || done == "N")
    {
        std::cout << "How many sides on your dice: ";
        std::cin >> mod;
        int num = (rand() % mod) + 1;
        std::cout << num << '\n';
        std::cout << "Roll again (y/n)? ";
        std::cin >> roll_again;
    }
    else
    {
        std::cout << "Please insert valid operator ";
        while(done != "n" && done != "N" && done != "y" && done != "Y")
        {
                std::cout << "Exit programm (y/n)? ";
                std::cin >> done;
        }
    }

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}