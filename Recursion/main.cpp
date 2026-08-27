#include <iostream>
#include <limits>

    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower

int factorial(int num);


void walk(int steps);

int main(){
    // Example #1 \/
    //std::cout << factorial(10) << '\n';

    // Example #2 \/
    //walk(12);

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

// Example #1: 

// Iterative: 
/*
int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}
*/

// Recursive:
/*
int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);

    }
    else{
        return 1;
    }
*/



// Example #2: 

// Iterative: 
/*
void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "Step\n";
    }
}
*/

// Recursive: 
/*
void walk(int steps){
    if(steps > 0){
        std::cout << "Step\n";
        walk(steps - 1);
    }
}
*/