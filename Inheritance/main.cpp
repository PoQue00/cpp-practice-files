#include <iostream>
#include <limits>

// inheritance = A class can recieve attributes and methods from another class
//               Children classes inherit from a Parent class
//               Helps to reuse similar code found within multiple classes

class Shape{
    public:
        double area;
        double volume;
};
class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * 3;
    }  
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4/3.0) * 3.14159 * (radius * 3);
    }
};

int main(){

    Cube cube1(6);
    Sphere sphere1(9);

    std::cout << "Area: " << cube1.area << "cm\n";
    std::cout << "Volume: " << cube1.volume << "cm\n";

    std::cout << "Area: " << sphere1.area << "cm\n";
    std::cout << "Volume: " << sphere1.volume << "cm\n";

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}