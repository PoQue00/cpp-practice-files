#include <iostream>
#include <limits>

int main(){
        
    std::string students[] = {"Me", "You", "Us", "Them"};

    for(std::string student : students){
        std::cout << student << '\n';
    }


    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}