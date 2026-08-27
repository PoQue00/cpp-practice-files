#include <iostream>
#include <limits>

// overloaded constructors = multiple constructors w/ same name but different parameters
//                           allows for varying arguments when instantiating an object

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    Pizza(){
        
    }
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){
    
    Pizza pizza1("Ham", "Cheese");

    std::cout << "Topping 1#: " << pizza1.topping1 << '\n';
    std::cout << "Topping 2#: " << pizza1.topping2 << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}