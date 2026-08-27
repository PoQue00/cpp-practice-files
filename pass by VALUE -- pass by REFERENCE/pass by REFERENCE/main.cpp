#include <iostream>
#include <limits>

void swap(std::string &x, std::string &y);

int main(){
    
    std::string x = "Coke";
    std::string y = "Pepsi";

    swap(x, y);

    std::cout << "In cup x is " << x << '\n';
    std::cout << "In cup y is " << y << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}