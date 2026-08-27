#include <iostream>
#include <limits>
/*
    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    // When using pointers, be careful that your code isn't
    // dereferencing null or pointing to free memory
    // this will cause undefined behavior
*/
int main(){
    
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "No memory adress assigned\n";
    }
    else{
        std::cout << "Memory adress assigned\n";
    }



    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}