#include <iostream>
#include <limits>

void happybirthday(std::string name);

int main(){

    std::string name;

    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << '\n';

    happybirthday(name);
    happybirthday(name);
    happybirthday(name);

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

void happybirthday(std::string name){
    std::cout << "Happy Birthday To You!" << '\n';
    std::cout << "Happy Birthday To You!" << '\n';
    std::cout << "Happy Birthday " << name << '\n';
    std::cout << "Happy Birthday To You!" << '\n' << '\n';
}