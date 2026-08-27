# C++ Learning Exercises

A collection of beginner-friendly C++ exercises created while following the [Bro Code C++ tutorial](https://youtu.be/-TkoO8Z07hI). Each folder focuses on a language fundamental or a small programming concept.

## Topics

- Variables, scope, constants, and `sizeof()`
- Console input and output
- Arithmetic, strings, enums, structs, and arrays
- Loops, nested loops, `break`, and `continue`
- Functions, overloaded functions, recursion, and return values
- Passing values, references, and arrays to functions
- Pointers, memory addresses, null pointers, and dynamic memory
- Classes, objects, constructors, getters, setters, and inheritance
- Searching and sorting arrays
- Random numbers and simple event generation
- Small practice programs, including a temperature converter

## Repository Layout

Each topic is kept in its own folder. Most source files are standalone examples and can be compiled independently.

```text
INFO STUFF/
|-- Arrays/
|-- Classes And Objects/
|-- Constructors/
|-- Functions/
|-- Inheritance/
|-- Loops/
|-- Pointers/
|-- Sorting Arrays/
|-- Structs/
|-- Temp_Converter/
`-- ...
```

## Requirements

- A C++ compiler, such as `g++`
- A terminal
- Visual Studio Code with the C/C++ extension (optional)

The examples use common C++ features and do not require third-party libraries.

## Compile and Run an Exercise

Open a terminal in the folder containing the source file. For example:

```powershell
g++ main.cpp -o main.exe
& ".\\main.exe"
```

For a file with a different name:

```powershell
g++ Arrays.cpp -o Arrays.exe
& ".\\Arrays.exe"
```

Some directories contain more than one source file, but the examples are generally intended to be compiled one at a time. Avoid compiling the entire repository in one command because multiple files define `main()`.

## Learning Notes

The code is intentionally simple and exploratory. Examples may use different naming styles or demonstrate an idea without extensive input validation. The projects are practice material rather than production-ready applications.

## Tutorial Reference

These exercises were created while learning from Bro Code's C++ tutorial:

- [C++ tutorial](https://youtu.be/-TkoO8Z07hI)

This repository is an independent collection of learning exercises and is not affiliated with or endorsed by Bro Code.

## License

No license has been selected for this repository yet. Until one is added, all rights are reserved by the repository owner.
