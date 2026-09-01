#include <iostream>
#include <limits>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    
    double balance = 4;
    int choice = 0;

    do{
        std::cout << "Enter your choice: " << '\n';
        std::cout << "1. Show balance: " << '\n';
        std::cout << "2. Deposit Money: " << '\n';
        std::cout << "3. Withdraw Money: " << '\n';
        std::cout << "4. Exit: " << '\n';
        std::cin >> choice;
    
        switch(choice){
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: return 0;
            default: std::cout << "Invalid Choice!!" << '\n';
        }

    }while(choice != 4);

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(){

    double amount = 0;

    std::cout << "Enter amount: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "INVALID" << '\n';
    }
}

double withdraw(double balance){
    return 0;
}