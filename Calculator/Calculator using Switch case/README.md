# Simple C Calculator

## Description
This is a robust, command-line calculator written in C. It prompts the user to enter two integers and an arithmetic operator, then performs the requested calculation utilizing a switch-case statement. The program features structured input validation and efficient input buffer management to ensure a seamless user experience.

## Features
* Performs fundamental arithmetic operations: Addition (+), Subtraction (-), Multiplication (*), and Division (/).
* Handles division by zero gracefully with specific error messages.
* Features robust input buffer clearing to prevent the program from skipping consecutive user prompts.
* Validates operator input and rejects unsupported characters.

## Prerequisites
* A standard C compiler (such as GCC or MinGW) installed on your system.

## How to Compile and Run
1. Save the source code in a file named `calculator.c`.
2. Open your terminal or command prompt.
3. Compile the code using the following command:
   gcc calculator.c -o calculator
4. Run the executable:
   ./calculator

## Usage Instructions
Upon running the program, follow the on-screen prompts:
1. Input the first integer value when requested.
2. Provide the desired mathematical operator (+, -, *, /).
3. Input the second integer value.
4. The program will display the complete mathematical equation along with the final computed result.