# KDA and MVP Calculator (C Version)

## Overview
This project is a C-based command-line application that calculates player's KDA (Kills, Deaths, Assists) ratio and evaluates their MVP score. It is built with a clean architecture, separating the core logic into dedicated functions for precise calculations.

## Features
* **Modular Code:** Utilizes separate function prototypes and definitions (`kda_calculation` and `mvp_calculation`) for clean and readable code structure.
* **Robust Error Handling:** Validates user input by checking the return value of `scanf()`. If a user enters non-numeric data, the program immediately catches the error, displays an invalid input message, and safely terminates.
* **Safe Typecasting:** Explicitly casts integer values to floats during the KDA calculation to ensure precise division and prevent data loss.
* **Zero-Death Handling:** Automatically adjusts effective deaths to 1.0 if the player has 0 deaths, preventing a runtime crash due to division by zero.

## Tech Stack
* Language: C
* Compiler: GCC

## How to Compile and Run
1. Ensure you have a C compiler (such as GCC) installed on your system.
2. Open your terminal or command prompt in the project directory.
3. Compile the source code using the following command:
   gcc filename.c -o calculator
4. Run the compiled executable:
   * On Windows: `.\calculator.exe`
   * On macOS/Linux: `./calculator`
5. Enter the numeric values for your kills, assists, and deaths when prompted to see your final score.
