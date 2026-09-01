# Credit Card Validator

A simple C++ command-line program that checks whether a credit card number passes the **Luhn algorithm** checksum test.

## Features

- Accepts a card number from standard input
- Implements the Luhn algorithm
- Doubles every second digit from the right
- Reduces doubled values by adding their digits
- Reports whether the number passes the checksum test
- Waits for Enter before exiting

## Requirements

- A C++ compiler, such as g++
- Visual Studio Code with the C/C++ extension (optional)

## Build

Open a terminal in this folder and run:

```text
g++ Validator.cpp -o Validator.exe
```

## Run

On Windows PowerShell, run:

```text
.\Validator.exe
```

## Example

```text
Enter your credit card number: 4532015112830366
This number is valid!
Press Enter to exit...
```

## How It Works

The program uses the Luhn algorithm, also known as the modulo 10 algorithm:

1. Start at the rightmost digit.
2. Moving left, double every second digit.
3. If a doubled value has two digits, add those digits together.
4. Add all resulting digits.
5. The card number passes the checksum when the total is divisible by 10.

Passing the Luhn check does not prove that a card exists, is active, or is authorized for use. The program currently expects a numeric card number without spaces or hyphens.

## Concepts Demonstrated

- Functions and function prototypes
- Strings and character-to-digit conversion
- Loops
- Conditional statements
- Arithmetic and modulo operations
- Standard input and output
- `std::numeric_limits` for clearing the input buffer
