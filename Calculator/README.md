# C Command Line Calculator

A robust, command-line interface calculator built entirely in C. This project goes beyond basic arithmetic operations by focusing on secure user input handling, memory buffer management, and predictable output formatting. 

## Key Features & Technical Highlights

* **Input Buffer Management:** One of the common pitfalls in C programming is handling the standard input (`stdin`) buffer. This program implements strategic whitespace handling when reading characters to safely consume leftover newline characters (`\n`) from previous numeric inputs, ensuring the program never skips a prompt.
* **Strict Input Validation:** The system utilizes the return value of `scanf()` to verify that the user provides the correct data types. If an invalid input is detected (e.g., entering a letter when a number is expected), the program handles the error gracefully and terminates safely, preventing undefined behavior.
* **Precision Output Formatting:** To provide a clean and professional user experience, all floating-point inputs and arithmetic results are strictly formatted to two decimal places (`%.2f`).
* **Clean Control Flow:** The operations are managed through explicit and highly readable conditional branches, making the codebase maintainable and easily extensible for future mathematical operations.

## How to Compile and Run

1. Open your terminal.
2. Compile the source code using GCC:
```bash
   gcc calculator.c -o calculator