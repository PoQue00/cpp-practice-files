# Rock Paper Scissors

A small console-based Rock Paper Scissors game written in C++. The player chooses rock, paper, or scissors, and the computer generates a random choice. The program then displays both choices and reports whether the player wins, loses, or draws.

## Features

- Accepts `r`, `p`, or `s` as player input.
- Accepts uppercase input such as `R`, `P`, or `S`.
- Rejects invalid choices and prompts the player again.
- Generates a random computer choice.
- Displays the selected choices and the game result.

## Requirements

- A C++ compiler with C++ standard library support.
- Windows PowerShell or another terminal for running the executable.

## Build and Run

From this directory, compile the program with `g++`:

```powershell
g++ main.cpp -o main.exe
```

Run the game with:

```powershell
.\main.exe
```

In VS Code, the included C/C++ build task can also be used to build the active C++ file.

## How to Play

1. Start the program.
2. Enter `r` for Rock, `p` for Paper, or `s` for Scissors.
3. The computer selects a choice.
4. The program displays the outcome.

The standard rules apply: Rock beats Scissors, Scissors beats Paper, and Paper beats Rock.

## Project Structure

```text
main.cpp    # Game implementation and entry point
```

## Notes

This project is intended as a simple C++ console programming exercise. The computer choice currently uses the traditional `rand()` and `srand()` functions.
