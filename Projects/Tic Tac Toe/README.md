# Tic Tac Toe

A simple C++ command-line Tic Tac Toe game where the player competes against a computer opponent.

## Features

- Human player uses `X`.
- Computer opponent uses `O`.
- 3x3 console game board.
- Player selects a board position from 1 through 9.
- Computer chooses an available position at random.
- Detects player wins, computer wins, and ties.
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

## How to Play

The board positions are numbered as follows:

```text
     |     |     
  1  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  5  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  
```

When prompted, enter the number of an empty position. The player wins by placing three `X` markers in a row horizontally, vertically, or diagonally.

## Example

```text
Enter a spot to place a marker (1-9): 5

     |     |     
  O  |  2  |  3  
_____|_____|_____
     |     |     
  4  |  X  |  6  
_____|_____|_____
     |     |     
  7  |  8  |  9  

Thanks for playing
Press Enter to exit...
```

## Concepts Demonstrated

- Character arrays
- Functions and function declarations
- Pointers and array access
- Loops and conditional statements
- Random number generation with `rand()` and `srand()`
- Win-condition checks
- Tie detection
- Console input and output

## Known Limitations

- Non-numeric input is not currently validated.
- Input outside the range 1 through 9 can cause invalid array access.
- The computer opponent uses random moves and does not apply a strategy.
- There is no replay option; restart the program to play again.
