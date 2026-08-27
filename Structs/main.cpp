#include <iostream>
#include <limits>

// struct = A structure that group related variables under one name
//          structs can contain many different data types (string, int, double, bool, etc.)
//          variables in a struct are known as "members"
//          members can be access with . "Class Member Access Operator"

struct student{
    std::string name;
    int year;
    int age;

};

int main(){
    
    student student1;
    student1.name = "Idris";
    student1.year = 11;
    student1.age = 15;

    student student2;
    student2.name = "Leland";
    student2.year = 11;
    student2.age = 15;

    student student3;
    student3.name = "Gavin";
    student3.year = 11;
    student3.age = 15;

    std::cout << "Name: " << student1.name << '\n';
    std::cout << "Age: " << student1.age << '\n';
    std::cout << "Year: " << student1.year << '\n';

    std::cout << '\n';

    std::cout << "Name: " << student2.name << '\n';
    std::cout << "Age: " << student2.age << '\n';
    std::cout << "Year: " << student2.year << '\n';

    std::cout << '\n';

    std::cout << "Name: " << student3.name << '\n';
    std::cout << "Age: " << student3.age << '\n';
    std::cout << "Year: " << student3.year << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}