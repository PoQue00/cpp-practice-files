#include <iostream>
#include <limits>

    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

int main(){
    /*
    int *pNum = NULL;

    pNum = new int;

    *pNum = 15;

    std::cout << pNum << '\n';
    std::cout << *pNum << '\n';

    delete pNum;
    */

    char *pGrades = NULL;
    int size;

    std::cout << "Size: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << "Grade #"<< i + 1 << ": " << pGrades[i] << '\n';
    }

    delete[] pGrades;




    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}