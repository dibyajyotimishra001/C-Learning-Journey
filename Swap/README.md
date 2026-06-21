# Number Swapping using Pointers in C

This program demonstrates the core concept of **Call by Reference** in C language. It swaps the values of two integer variables not by passing their actual values, but by passing their memory addresses using pointers.

## Core Concepts Implemented

* **Pointers:** Used to store the memory addresses of variables.
* **Call by Reference:** Passing the address of variables to a function, allowing the function to modify the original variables directly.
* **Memory Management:** Direct interaction with computer memory, avoiding the creation of unnecessary variable copies during function calls.

## How Pointers are Used in this Program

1.  **Address-of Operator (`&`):** In the `main()` function, `&num_1` and `&num_2` are used to extract the exact memory addresses of the variables. These addresses are passed to the `swap` function.
2.  **Dereference Operator (`*`):** Inside the `swap(int* num1, int* num2)` function, the `*` operator is used to access and modify the actual values stored at those memory addresses. 
3.  **The Swapping Logic:** * The value at address `num1` is temporarily stored in `temp`.
    * The value at address `num2` is written into the memory location of `num1`.
    * The stored `temp` value is written into the memory location of `num2`.

This ensures that the original variables in the `main()` function are modified directly, showcasing the power of low-level memory manipulation in C.

## How to Compile and Run

1. Open your terminal.
2. Compile the code using GCC:
   gcc swap_pointers.c -o swap_pointers
3. Run the executable:
   ./swap_pointers