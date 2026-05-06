# Prime Number Checker

A simple and efficient C program to check whether a given number is a prime number.

## Description
This program takes an integer input from the user and determines if it is a prime number. It includes basic input validation to ensure the user enters a valid number greater than 1. The primality test is optimized by checking divisibility only up to the square root of the number, reducing the time complexity of the operation.

## Prerequisites
- A C compiler installed on your system (such as GCC).

## How to Compile and Run

1. Clone the repository or download the source code file.
2. Open your terminal or command prompt and navigate to the directory where the file is saved.
3. Compile the code using the following command:
   ```bash
   gcc prime_checker.c -o prime_checker