# Percentage to Grade Converter

A simple, robust command-line utility written in C that calculates a student's grade based on their percentage. This project is part of my C-Learning-Journey, focusing on core programming logic and memory safety.

## Features

* **Input Validation:** Uses scanf return values to handle non-numeric inputs and prevent unexpected crashes.
* **Boundary Checking:** Validates that the input strictly falls within the logical 0 to 100 percentage range.
* **Clean Conditional Logic:** Utilizes a streamlined if-else ladder for optimized performance.

## Grade Scale

| Percentage Range | Grade |
| :--- | :--- |
| > 90 to 100 | A+ |
| > 80 to 90 | A |
| > 70 to 80 | B |
| > 60 to 70 | C |
| > 50 to 60 | D |
| > 35 to 50 | E |
| 0 to 35 | F |

## How to Run

1. Compile the C program using a standard C compiler (e.g., GCC):
   gcc grade_calculator.c -o grade_calculator
2. Run the executable:
   ./grade_calculator
3. Follow the prompt to enter a valid percentage.