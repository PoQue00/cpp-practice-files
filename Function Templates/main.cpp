#include <iostream>
#include <limits>

// function template = describes what a function looks like.
//                     Can be used to generate as many overloaded functions
//                     as needed, each using different data types

template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}

int main(){
    
    std::cout << max(1.2, 2.1) << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
