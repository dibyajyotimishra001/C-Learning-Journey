# Bill Splitter with GST Calculator

## Description
A simple, robust command-line C program that calculates the exact share of a restaurant bill per person among a group of friends. It automatically adds an 18% Goods and Services Tax (GST) to the base bill amount before dividing the final cost.

## Features
- Prompts the user for the total number of friends and the base bill amount.
- Automatically calculates and applies an 18% GST to the total.
- Accurately splits the final amount equally among the group.
- Displays the final payable amount per person formatted to two decimal places.

## Error Handling and Zero-Error Prevention
To ensure the program runs flawlessly and avoids unexpected crashes, strict input validation has been implemented:
- **Zero Division Prevention:** If a user accidentally enters `0` as the number of friends, a standard division operation would cause a fatal "Divide by Zero" runtime error. The program checks for `0` (and negative numbers) and safely halts execution with an error message instead of crashing.
- **Data Type Validation:** The program verifies the return values of the `scanf` functions. If a user inputs letters or special characters when numbers are expected, the program detects the invalid input and terminates safely.
- **Negative Value Checks:** It prevents logical errors by ensuring the bill amount cannot be negative.

## How to Run
1. Compile the code using a C compiler such as GCC:
```bash
   gcc bill_splitter.c -o bill_splitter