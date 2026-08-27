# Temperature Converter

A beginner-friendly C++ command-line program that converts temperatures between Fahrenheit, Celsius, and Kelvin.

## Features

- Fahrenheit to Celsius
- Fahrenheit to Kelvin
- Celsius to Fahrenheit
- Celsius to Kelvin
- Kelvin to Celsius
- Kelvin to Fahrenheit
- Press Enter to exit after the conversion

## Requirements

- A C++ compiler, such as `g++`
- Visual Studio Code with the C/C++ extension (optional)

## Build

Open a terminal in this project folder and run:

```powershell
g++ Temp_Converter.cpp -o Temp_Converter.exe
```

## Run

```powershell
& ".\\Temp_Converter.exe"
```

## Usage

Choose a conversion by entering a number from `1` to `6`, then enter the temperature value:

```text
********** Temperature Converter **********
1 = Fahrenheit to Celsius
2 = Fahrenheit to Kelvin
3 = Celsius to Fahrenheit
4 = Celsius to Kelvin
5 = Kelvin to Celsius
6 = Kelvin to Fahrenheit
What unit do you want to convert to? (1/2/3/4/5/6): 1
Enter temperature in Fahrenheit: 32
Temperature in Celsius: 0
```

## Concepts Demonstrated

- Variables and `double` values
- Console input and output with `iostream`
- `if`, `else if`, and `else` statements
- Arithmetic expressions and conversion formulas
- Input-buffer handling with `std::cin.ignore()` and `std::cin.get()`

## Source Header

The exit prompt uses `std::numeric_limits`, so `Temp_Converter.cpp` includes the required standard header:

```cpp
#include <limits>
```

## Known Limitations

- The program performs one conversion per run.
- Input validation for non-numeric temperatures is not currently implemented.
- Kelvin values below absolute zero are not rejected.
