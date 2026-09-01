# Odd or Even

A beginner-friendly C++ command-line program that determines whether an integer is odd or even.

## Features

- Prompts for an integer.
- Reports whether the number is odd or even.
- Supports positive, negative, and zero values.
- Waits for Enter before exiting.

## Requirements

- A C++ compiler, such as `g++`
- Visual Studio Code with the C/C++ extension (optional)

## Build

Open a terminal in the project folder and run:

```powershell
g++ ooe.cpp -o ooe.exe
```

## Run

```powershell
& ".\\ooe.exe"
```

## Example

```text
Enter a number: 17
Odd Number
Press Enter to exit...
```

## Concepts Demonstrated

- Variables and integer data types
- Console input and output with `iostream`
- The remainder operator (`%`)
- The conditional operator (`?:`)
- Input-buffer handling with `std::cin.ignore()` and `std::cin.get()`

## Portability Note

The exit prompt uses `std::numeric_limits`. If a compiler does not expose that declaration through another included header, add this standard header near the top of `ooe.cpp`:

```cpp
#include <limits>
```
