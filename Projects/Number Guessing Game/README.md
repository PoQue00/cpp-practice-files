# Number Guessing Game

A simple C++ command-line game that generates a random number and challenges the player to guess it.

## Features

- Choose the maximum possible number.
- Generates a random target between 1 and the selected maximum.
- Provides `Too high!!` and `Too low!!` hints.
- Counts the number of guesses.
- Waits for Enter before exiting.

## Requirements

- A C++ compiler, such as g++
- Visual Studio Code with the C/C++ extension (optional)

## Build

Open a terminal in this folder and run:

```text
g++ main.cpp -o main.exe
```

## Run

On Windows PowerShell, run:

```text
.\main.exe
```

## Example

```text
########## NUMBER GUESSING GAME ##########
Enter Max number: 10
Enter Guess: 5
Too low!!
Enter Guess: 8
Spot on!!
You took 2 tries!!
##########################################
```

## Concepts Demonstrated

- Variables and integer data types
- Console input and output
- Random number generation
- `if`, `else if`, and `else` statements
- `do...while` loops
- Counting repeated attempts
- Clearing the input buffer with `std::numeric_limits`
