#include <iostream>
#include <limits>

void printInfo(const std::string name, const int age);

int main(){
    
    std::string name = "Gavin";
    int age = 15;

    printInfo(name, age);


    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

void printInfo(const std::string name, const int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}