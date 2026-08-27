#include <iostream>
#include <limits>

void printnum();

int mynum = 21;

int main(){
    
    int mynum = 1;

    printnum();

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

void printnum(){
    std::cout << ::mynum << '\n';
}