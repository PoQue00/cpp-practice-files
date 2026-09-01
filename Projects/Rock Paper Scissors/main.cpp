#include <iostream>
#include <limits>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You chose: "; 
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "The Computer Chose: ";
    showChoice(computer);

    chooseWinner(player, computer);

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}


char getUserChoice(){
    char player;

    std::cout << "#############################" << '\n';
    std::cout << "# Rock-Paper-Scissors Game! # " << '\n';
    std::cout << "#############################" << '\n';

    do{
    std::cout << "###############################" << '\n';
    std::cout << "Choose one of the following: " << '\n';
    std::cout << "r = Rock" << '\n';
    std::cout << "p = Paper" << '\n';
    std::cout << "s = Scissors" << '\n';
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's' && player != 'R' && player != 'P' && player != 'S');

    return player;
}

char getComputerChoice(){

    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num){
        case 1 : return 'r';
        case 2 : return 'p';
        case 3 : return 's';
    }

    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 'R':
            case 'r': std::cout << "Rock" << '\n';
                    break;
        case 'P':
            case 'p': std::cout << "Paper" << '\n';
                    break;
        case 'S':
            case 's': std::cout << "Scissors" << '\n';
                        break;
    }
}

void chooseWinner(char player, char computer){

    switch(player){
        case 'R':
            case 'r': if(computer == 'r'){
                std::cout << "You Draw!!" << '\n';
            }
            else if(computer == 'p'){
                std::cout << "You Loose!" << '\n';
            }
            else{
                std::cout << "You Win!";
            }
            break;
        case 'P':
            case 'p': if(computer == 'r'){
                std::cout << "You Win!" << '\n';
            }
            else if(computer == 'p'){
                std::cout << "You Draw!" << '\n';
            }
            else{
                std::cout << "You Loose!" << '\n';
            }
            break;
        case 'S':
            case 's': if(computer == 'r'){
                std::cout << "You Loose!" << '\n';
            }
            else if(computer == 'p'){
                std::cout << "You Win!" << '\n';
            }
            else{
                std::cout << "You Draw!" << '\n';
            }
            break;
    }

}
