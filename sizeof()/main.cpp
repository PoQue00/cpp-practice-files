#include <iostream>
#include <limits>

int main(){
    
    double gpa = 1.3;
    std::cout << sizeof(gpa) << " bytes\n";

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}