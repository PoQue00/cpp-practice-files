# C++ Quiz Game

A simple C++ command-line quiz game that tests basic C++ knowledge with multiple-choice questions and calculates a final percentage score.

## Features

- Four multiple-choice C++ questions
- Questions and answer options displayed in the terminal
- Case-insensitive answer selection
- Immediate correct or incorrect feedback
- Displays the correct answer after an incorrect guess
- Final score and percentage summary
- Press Enter to exit after the quiz

## Requirements

- A C++ compiler, such as g++
- Windows PowerShell or another command-line terminal
- Visual Studio Code with the C/C++ extension (optional)

## Build

Open a terminal in this folder and run:

```text
g++ Quiz.cpp -o Quiz.exe
```

## Run

On Windows PowerShell, run:

```text
.\Quiz.exe
```

## How to Play

1. Read the question and its answer choices.
2. Enter the letter for your answer, such as `A`, `B`, `C`, or `D`.
3. Review the immediate feedback.
4. Check your total score at the end of the quiz.

## Example

```text
######################################
1. What year was C++ created?:
######################################
A. 1969
B. 1975
C. 1985
D. 1989
C
Correct!

##            Results               ##
Correct Guesses: 1
# Of questions: 4
Score: 25%
```

## Concepts Demonstrated

- Arrays and two-dimensional arrays
- `for` loops
- Character input
- Conditional statements
- Case conversion with `toupper()`
- Basic score calculation
- Console input and output
- Standard library headers
