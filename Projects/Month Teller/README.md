# Month Teller

A beginner-friendly C++ console program that converts a month number from 1 to 12 into the corresponding month name.

## Requirements

- A C++ compiler, such as `g++`
- Visual Studio Code with the C/C++ extension (optional)

## Build

Open a terminal in this project folder and run:

```powershell
g++ "Month Teller.cpp" -o "Month Teller.exe"
```

If the program is already running, stop it before rebuilding so the executable is not locked.

## Run

```powershell
& ".\Month Teller.exe"
```

Enter a number from `1` to `12`. The program displays the corresponding month. Any other number produces an invalid-month message.

Press **Enter** when prompted to exit.

## C++ Header Requirement

The exit code uses `std::numeric_limits`, so the source file must include this header:

```cpp
#include <limits>
```

The beginning of the source file should contain:

```cpp
#include <iostream>
#include <limits>
```

## Concepts Demonstrated

- Variables and console input/output
- `switch` statements
- `case`, `break`, and `default`
- Input-buffer handling with `std::cin.ignore()` and `std::cin.get()`
