#include <iostream>
#include <limits>

// object = A collection of attributes and methods
//          They can have characteristics and could peform actions
//          Can be used to mimic real world items (ex. Phone, Book, Dog)
//          Created from a class which acts as a "blue-print"

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

int main(){
    
    Human human1;
    Human human2;

    human1.name = "Bjarne";
    human1.occupation = "Professor";
    human1.age = 75;

    std::cout << "Name: " << human1.name << '\n';
    std::cout << "Occupation: " << human1.occupation << '\n';
    std::cout << "Age: " << human1.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();

    human2.name = "Dennis";
    human2.occupation = "Computer Scientust";
    human2.age = 70;

    std::cout << "Name: " << human2.name << '\n';
    std::cout << "Occupation: " << human2.occupation << '\n';
    std::cout << "Age: " << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();




    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}