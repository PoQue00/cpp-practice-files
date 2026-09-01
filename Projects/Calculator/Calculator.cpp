#include <iostream>
#include <limits>

int main()
{
    char operation;
    double num1;
    double num2;
    double result;

    std::cout << "********** CALCULATOR **********" << '\n';

    std::cout << "Enter an operation (+ - * /): ";
    std::cin >> operation;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (operation)
    {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                std::cout << "Result: " << result << '\n';
            }
            else
            {
                std::cout << "Error: Cannot divide by zero." << '\n';
            }
            break;
        default:
        {
                std::cout << "Error: Invalid operation." << '\n';
                break;
        }

    }

    std::cout << "********** CALCULATOR **********" << '\n';

    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}