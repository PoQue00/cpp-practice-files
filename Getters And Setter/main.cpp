#include <iostream>
#include <limits>

// Abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute READABLE
// setter = function that makes a private attribute WRITEABLE

class Stove{
    private:
        int temperacture = 1230;
    public:
    Stove(int temperacture){
        setTemperacture(temperacture);
    }
    int getTemperacture(){
        return temperacture;
    }
    void setTemperacture(int temperactue){
        if(temperactue < 0){
            this->temperacture = 0;
        }
        else if(temperactue > 400){
            this->temperacture = 400;
        }
        else{
            this->temperacture = temperacture;
        }
        
    }
};

int main(){
    
    Stove stove1(1234);


    std::cout << "The temperacture is: " << stove1.getTemperacture() << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}