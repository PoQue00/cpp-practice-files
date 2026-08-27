#include <iostream>
#include <limits>

int main(){
    
    std::string car[] = {"BMW E46 M3 GTR", "Lamborghini Countach", "Ferraria F40"};

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}