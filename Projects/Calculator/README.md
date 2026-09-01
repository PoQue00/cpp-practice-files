# Calculator

A simple C++ command-line calculator that performs addition, subtraction, multiplication, and division using a `switch` statement.

## Features

- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Decimal number support
- Press Enter to exit after the calculation

## Requirements

- A C++ compiler, such as g++
- Visual Studio Code with the C/C++ extension (optional)

## Important Source Fix

`Calculator.cpp` uses `std::numeric_limits`, so add this header before compiling:

```cpp
#include <limits>
```

The division case should also include a `break` statement and handle division by zero:

```cpp
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
```

## Build

Open a terminal in this folder and run:

```text
g++ Calculator.cpp -o Calculator.exe
```

## Run

On Windows PowerShell, run:

```text
.\Calculator.exe
```

## Example

```text
********** CALCULATOR **********
Enter an operation (+ - * /): *
Enter #1: 6
Enter #2: 7
Result: 42
```

## Concepts Demonstrated

- Variables and data types
- Console input and output
- Arithmetic operators
- `switch` statements
- Conditional statements
- Division-by-zero validation
- Standard library headers
