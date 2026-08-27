#include <iostream>
#include <limits>

int main()
{
    std::string name;
    bool name_valid = false;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12)
    {
        name_valid = false;
        std::cout << "Your name is too long! (Use less than 12 characters)" << '\n';
    }
    else if(name.length() >= 1)
    {
        name_valid = true;
    }
    else if(name.empty())
    {
        name_valid = false;
        std::cout << "Your name is empty!" << '\n';
    }

    name.insert(0,  "@");

    if(name_valid == true)
    {
        std::cout << "Your name is: " << name << '\n';
    }
    else if(name_valid == false)
    {
        std::cout << "Your name is invalid!" << '\n';
    }

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}