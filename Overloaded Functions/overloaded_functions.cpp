#include <iostream>
#include <limits>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){
    
    bakePizza();
    bakePizza("a side of noah ;)", "pepperoni");

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

void bakePizza(){
    std::cout << "Pizza is baked! " << '\n';
}

void bakePizza(std::string topping1){
    std::cout << "Pizza with " << topping1 << "!" << '\n'; 
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Pizza with " << topping1 << " and " << topping2 << "!" << '\n'; 
}