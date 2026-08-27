#include <iostream>
#include <limits>

// pointer is a varible that stores a memory address of another varible.


int main(){
    
    std::string name = "Gavin";
    int age = 15;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    // std::cout << pFreePizzas << '\n';
    std::cout << *pFreePizzas << '\n';


    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}