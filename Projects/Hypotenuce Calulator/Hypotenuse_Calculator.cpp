#include <iostream>
#include <cmath>

/*
ints
bools
doubles
strings
chars
*/

int main()
{

    double a;
    double b;
    double c;
    char d;

    std::cout << "Side A: ";
    std::cin >> a;

    std::cout << "Side B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "The hypotenuse is: " << c << '\n';
    std::cout << "Press any key to exit..." << '\n';
    std::cin >> d;
    return 0;
}