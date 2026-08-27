#include <iostream>
#include <limits>

int main(){
    
    std::string students[] = {"Me", "You", "Us", "Them"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i ++){
        std::cout << students[i] << '\n';
    }

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}