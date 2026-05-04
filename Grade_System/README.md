# Percentage to Grade Converter

A simple, robust command-line utility written in C that calculates a student's grade based on their percentage. This project is part of my C-Learning-Journey, focusing on core programming logic and memory safety.

## Features

* **Input Validation:** Uses `scanf` return values to handle non-numeric inputs and prevent unexpected crashes.
* **Boundary Checking:** Validates that the input strictly falls within the logical 0 to 100 percentage range.
* **Clean Conditional Logic:** Utilizes a streamlined if-else ladder for optimized performance.
* **Detailed Feedback:** Provides not just the grade, but also qualitative remarks and automatic pass/fail status.

## Grade Scale

| Percentage Range | Grade | Remarks |
| :--- | :--- | :--- |
| 90 - 100 | A1 | Outstanding |
| 80 - 89.9 | A2 | Excellent |
| 70 - 79.9 | B1 | Very Good |
| 60 - 69.9 | B2 | Good |
| 50 - 59.9 | C1 | Above Average |
| 40 - 49.9 | C2 | Above Average |
| 33 - 39.9 | D  | Pass |
| 21 - 32.9 | E1 | Fail (Needs Improvement) |
| 0 - 20.9  | E2 | Fail |

*(Note: Any percentage strictly below 33 will also display a message indicating that the student has failed the examination.)*

## How to Run

1. Compile the C program using a standard C compiler (e.g., GCC):
   ```bash
   gcc grade_calculator.c -o grade_calculator
   ```
2. Run the executable:
   ```bash
   ./grade_calculator
   ```
3. Follow the prompt to enter a valid percentage.