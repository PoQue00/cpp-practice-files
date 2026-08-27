#include <iostream>
#include <limits>

//constructor = special method that is automatically called when an object is instantiated
//              useful for assigning values to attributes as arguments

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main(){

    Student student1("Idris", 15, 1.2);
    Student student2("Leland", 15, 3.4);

    std::cout << "Name: " << student1.name << '\n';
    std::cout << "Age: " << student1.age << '\n';
    std::cout << "GPA: " << student1.gpa << '\n';

    std::cout << "Name: " << student2.name << '\n';
    std::cout << "Age: " << student2.age << '\n';
    std::cout << "GPA: " << student2.gpa << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}