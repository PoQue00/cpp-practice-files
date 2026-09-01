# Hypotenuse Calculator

A C++ console program that calculates the hypotenuse of a right triangle from the lengths of its two legs.

## Formula

The program uses the Pythagorean theorem:

```text
c = sqrt(a² + b²)
```

Here, `a` and `b` are the two side lengths, and `c` is the hypotenuse.

## Requirements

- A C++ compiler, such as `g++`
- Visual Studio Code with the C/C++ extension (optional)

## Build

Open a terminal in this project folder and run:

```powershell
g++ "Hypotenuse_Calculator.cpp" -o "Hypotenuse_Calculator.exe"
```

If the executable is already running, stop it before rebuilding.

## Run

```powershell
& ".\Hypotenuse_Calculator.exe"
```

Enter the lengths of Side A and Side B. The program calculates and displays the hypotenuse.

## Example

```text
Side A: 3
Side B: 4
The hypotenuse is: 5
```

Press a non-whitespace character when prompted to exit.

## Concepts Demonstrated

- `double` variables for decimal values
- Console input and output with `std::cin` and `std::cout`
- Mathematical functions from `<cmath>`
- Squaring values with `pow()`
- Calculating square roots with `sqrt()`
