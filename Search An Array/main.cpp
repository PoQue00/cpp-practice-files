#include <iostream>
#include <limits>

/*

int searchArray(int array[], int size, int element);

int main(){
    

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        std::cout << myNum << " is at index " << index << '\n';
    }
    else{
        std::cout <<myNum << " is not in the array" << '\n';
    }

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i ++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}

*/

int searchArray(std::string array[], int size, std::string element);

int main(){
    

    std::string people[] = {"Gavin", "Idris", "Noah"};
    int size = sizeof(people)/sizeof(people[0]);
    int index;
    std::string myPerson;

    std::cout << "Enter element to search for: ";
    std::getline(std::cin, myPerson);

    index = searchArray(people, size, myPerson);

    if(index != -1){
        std::cout << myPerson << " is at index " << index << '\n';
    }
    else{
        std::cout << myPerson << " is not in the array" << '\n';
    }

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i ++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}