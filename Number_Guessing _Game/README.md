# Number Guessing Game

A simple, interactive command-line game written in C. This is my first C game, developed independently to practice fundamental programming concepts like loops, conditional statements, and input validation.

## Description

The game generates a random number between 1 and 10. The player is prompted to guess the number. After each guess, the game provides feedback, indicating whether the guessed number is too high or too low. Once the correct number is guessed, the game displays the total number of attempts it took to win.

## Features

* Random number generation using standard C libraries.
* Input validation to prevent errors from invalid user input.
* Real-time hints (Higher/Lower) to guide the player.
* Attempt tracking for a better user experience.

## How to Run

1. Ensure you have a C compiler installed on your system (such as GCC).
2. Open your terminal or command prompt.
3. Compile the code using the following command:
   ```bash
   gcc game.c -o game