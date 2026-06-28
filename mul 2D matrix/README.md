# 2D Array Multiplication Matrix

A C program that dynamically generates a multiplication table matrix for three user-inputted numbers utilizing 2D arrays.

## Core Logic and Features

- **Input Validation:** Secures the program from runtime crashes by validating the exact number of expected integer inputs using the `scanf` return value.
- **2D Arrays:** Implements an `arr[3][10]` matrix to securely store the generated multiplication tables in contiguous memory blocks.
- **Nested Loops:** Utilizes efficiently structured nested `for` loops for both memory population and data retrieval.

## Execution Flow

1. The program requests three space-separated integers from the user.
2. The input is validated to ensure exactly three integers are successfully parsed.
3. A nested loop iterates through the numbers and calculates their multiples (1 to 10), storing the product in the `3x10` matrix.
4. A secondary nested loop retrieves the stored data from the memory locations and displays the formatted tables.

## How to Run

Compile the program using GCC:
gcc matrix_table.c -o matrix_table

Execute the compiled file:
./matrix_table