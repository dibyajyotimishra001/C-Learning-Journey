# Snake, Water, Gun Game

A command-line implementation of the classic "Snake, Water, Gun" game (similar to Rock, Paper, Scissors) written in C. The user plays against the computer, which makes its choices using a random number generator.

## Features & Logic Implemented

* **Random Number Generation:** Utilizes `srand(time(NULL))` and `rand()` from `<stdlib.h>` and `<time.h>` to ensure the computer makes a truly unpredictable choice every time.
* **Input Validation:** Uses `scanf` return value checking to prevent the program from crashing if a user inputs non-integer characters.
* **Infinite Gameplay Loop:** Employs a continuous `while (1)` loop, allowing the user to play multiple rounds seamlessly without restarting the application.
* **Control Flow:** Deeply nested `if-else if` conditional logic to compare user and computer choices and declare the winner of each round.

## How to Play

1. Compile the program using a C compiler (e.g., GCC):
   ```bash
   gcc main.c -o game