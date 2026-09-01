#include <iostream>
#include <limits>

int main(){
    
    int num;
    int guess;
    int tries = 0;
    int max;

    std::cout << "########## NUMBER GUESSING GAME ##########" << '\n';

    std::cout << "Enter Max number: ";
    std::cin >> max;

    srand(time(NULL));
    num = (rand() % max) + 1;
    do{
        std::cout << "Enter Guess: ";
        std::cin >> guess;
        tries += 1;

        if(guess > num){
            std::cout << "Too high!!" << '\n';
        }
        else if(guess < num){
            std::cout << "Too low!!" << '\n';
        }
        else{
            std::cout << "Spot on!!" << '\n';
            std::cout << "You took " << tries << " tries!!" << '\n';
        }
    }while(guess != num);


    std::cout << "##########################################" << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}