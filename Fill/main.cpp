#include <iostream>
#include <limits>

int main(){
    
    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)

    const int size = 10;
    std::string foods[size];

    fill(foods, foods + (size/2), "pizza");
    fill(foods + (size/2), foods +  size, "toast");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}