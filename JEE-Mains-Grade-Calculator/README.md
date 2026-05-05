# JEE Mains Grade Calculator

A simple and robust C program designed to calculate the total percentage and determine the final grade of a student based on their Physics, Chemistry, and Mathematics (PCM) marks. 

## Features

* **Strict Input Validation:** The program actively checks if the user has entered valid numeric values. If characters or symbols are entered, it immediately stops and prompts an error.
* **Logical Range Checking:** Ensures that the entered marks for any subject do not exceed 100 or fall below 0.
* **Pass/Fail Criteria:** Implements a strict evaluation logic where a student must score at least 33 in **each** individual subject AND maintain an overall percentage of 40% to pass.
* **Automated Grading System:** If the student passes, the program accurately calculates and assigns a grade from `A+` to `E` based on the overall percentage.

## How to Run

1. Ensure you have a C compiler (like GCC) installed on your system.
2. Clone this repository or download the C file.
3. Open your terminal or command prompt.
4. Compile the code using the following command:
   ```bash
   gcc filename.c -o grader