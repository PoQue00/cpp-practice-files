#include <iostream>
#include <limits>

void sortArray(int array[], int size);

int main(){
    
    int numbers[] = {1, 4, 6, 5, 2, 7, 10, 8, 9, 3};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sortArray(numbers, size);

    for(int element : numbers){
        std::cout << element << " " << '\n';
    }

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

void sortArray(int array[], int size){
    int temp;

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}