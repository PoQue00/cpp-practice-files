#include <iostream>
#include <limits>

double getTotal(double prices[], int size);

int main(){
    ;
    double prices[] = {1.00, 2.00, 4.00, 4.50};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total << '\n';
    
    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}