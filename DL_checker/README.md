# Driving License Eligibility Checker

A C-based utility to determine driving license eligibility based on user age input.

## Key Features
- Age classification for various license types (Learning, Personal, Commercial).
- Input validation to handle non-integer values gracefully.
- Defensive programming through function return value checks.

## Technical Implementation
The program validates input by checking the return value of the scanf function. This prevents the execution of business logic with invalid or garbage data, providing a stable user experience.

## Usage
1. Compile the source file:
   gcc main.c -o dl_checker
2. Execute the compiled binary:
   ./dl_checker