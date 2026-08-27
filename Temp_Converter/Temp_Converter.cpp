#include <iostream>
#include <limits>

int main()
{

    double temp;
    char unit;

    std::cout << "********** Temperature Converter **********" << '\n' << '\n';
    std::cout << "  ##############################" << '\n';
    std::cout << "  # 1 = Fahrenheit to Celsius  #" << '\n';
    std::cout << "  # 2 = Fahrenheit to Kelvin   #" << '\n';
    std::cout << "  # 3 = Celsius to Fahrenheit  #" << '\n';
    std::cout << "  # 4 = Celsius to Kelvin      #" << '\n';
    std::cout << "  # 5 = Kelvin to Celsius      #" << '\n';
    std::cout << "  # 6 = Kelvin to Fahrenheit   #" << '\n';
    std::cout << "  ##############################" << '\n' << '\n';
    std::cout << "What unit do you want to convert to? (1/2/3/4/5/6): ";
    std::cin >> unit;

    if(unit == '1')
    {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature in Celsius: " << temp << '\n';
    }
    else if(unit == '2')
    {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8 + 273.15;
        std::cout << "Temperature in Kelvin: " << temp << '\n';
    }
    else if(unit == '3')
    {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temp;

        temp = (temp * 1.8) + 32;
        std::cout << "Temperature in Fahrenheit: " << temp << '\n';
    }
    else if(unit == '4')
    {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temp;

        temp = temp + 273.15;
        std::cout << "Temperature in Kelvin: " << temp << '\n';
    }
    else if(unit == '5')
    {
        std::cout << "Enter temperature in Kelvin: ";
        std::cin >> temp;

        temp = temp - 273.15;
        std::cout << "Temperature in Celsius: " << temp << '\n';
    }
    else if(unit == '6')
    {
        std::cout << "Enter temperature in Kelvin: ";
        std::cin >> temp;

        temp = (temp - 273.15) * 1.8 + 32;
        std::cout << "Temperature in Fahrenheit: " << temp << '\n';
    }
    else
    {
        std::cout << "Enter valid response" << '\n';
    }

    std::cout << "************************************" << '\n';
    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}