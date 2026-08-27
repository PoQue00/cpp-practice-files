#include <iostream>
#include <limits>

// enums = a user-defined data type that consists
//         of paired named-integer constants.
//         GREAT if you have a set of potential options

enum Day {thursday = 4, sunday = 7};

int main(){
    
    Day today = thursday;

    switch(today){
        case thursday : std::cout << "It is Thursday" << '\n';
                        break;
        default : std::cout << "It is not thursday" << '\n';
                break;
    }

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}