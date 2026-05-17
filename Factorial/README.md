# Factorial Calculation in C

## Overview
This repository contains two C programs that calculate the factorial of a given number using two different logic structures: Recursion and Iteration. 

## Approaches Included
1. **Recursive Method:** Calculates the factorial using standard recursive function calls.
2. **Iterative Method:** Calculates the factorial utilizing a traditional `for` loop.

## Highlight: Zero Error Handling Effort
A significant focus during the development of these programs was implementing robust error handling to achieve a "zero error" state when facing unexpected user inputs. The code safely handles edge cases without crashing:

* **Input Type Validation (Both Programs):** By actively checking the return value of the `scanf` function (`if (scanf("%d", &num) != 1)`), the programs prevent undefined behavior. If a user enters a character or a string instead of an integer, `scanf` fails to read exactly 1 item. The program then safely outputs an "Invalid input" error message and terminates with a non-zero exit code (`return 1`). This completely prevents the crashes or infinite loops typical in basic C programs.
* **Negative Number Validation (Iterative Program):** The iterative version explicitly checks if the entered integer is less than zero (`if(num < 0)`). Since factorials are mathematically undefined for negative integers, the program instantly alerts the user and safely terminates execution rather than attempting an invalid calculation.

## How to Compile and Run
1. Open your terminal in the directory containing the files.
2. Compile the desired program using GCC. For example:
   ```bash
   gcc recursive_file.c -o factorial_rec
   gcc iterative_file.c -o factorial_iter