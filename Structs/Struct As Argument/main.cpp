#include <iostream>
#include <limits>

struct car{
    std::string brand;
    std::string model;
    int year;
    std::string colour;
};

void printCar(car car);
void paintCar(car &car, std::string colour);

int main(){

    car car1;
    car car2;
    car car3;

    car1.brand = "Ferrari";
    car1.model = "F40";
    car1.year = 1987;
    car1.colour = "Red";

    car2.brand = "Lamborghini";
    car2.model = "Countach";
    car2.year = 1981;
    car2.colour = "White";

    car3.brand = "BMW";
    car3.model = "M3 GTR";
    car3.year = 2001;
    car3.colour = "Silver";

    paintCar(car1, "Black");

    printCar(car1);
    printCar(car2);
    printCar(car3);


    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

void printCar(car car){
    std::cout << "Brand: " << car.brand << '\n';
    std::cout << "Model: " << car.model << '\n';
    std::cout << "Year: " << car.year << '\n';
    std::cout << "Colour: " << car.colour << '\n';
    std::cout << '\n';
}

void paintCar(car &car, std::string colour){
    car.colour = colour;
}