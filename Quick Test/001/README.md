content = """# Quick Test - C Programming Practice

This repository contains a collection of C programming solutions developed for scenario-based practice problems. These programs demonstrate core programming concepts including input validation, control flow, loops, functions, and recursion.

## Repository Structure

The project consists of the following C source files:

1. **Alpha_key_storm_score_calculator.c**
   - **Purpose:** Calculates a user's net typing score for the 'Alpha Keystorm' game.
   - **Logic:** Accepts total words and total errors as input. It validates that inputs are numeric and that errors are non-negative and do not exceed total words, then subtracts errors from total words to produce the score.
   - **Key Concepts:** Variable declaration, `scanf()` input validation, arithmetic subtraction, conditional checks.

2. **Anime_Episode_Marathon.c**
   - **Purpose:** Computes the cumulative number of anime episodes watched over a period of days.
   - **Logic:** Implements a recursive function to find the sum of the first `n` natural numbers, where each day `i` represents watching `i` episodes.
   - **Key Concepts:** Recursion, base case conditions, user-defined mathematical functions.

3. **GitHub_Green_Dot_Tracker.c**
   - **Purpose:** Tracks user commit activity over a 7-day week to maintain a profile streak.
   - **Logic:** Utilizes a loop to prompt the user for daily commit counts. It uses modular helper functions to handle user input and print status messages. If commits are zero for a day, the iteration is skipped.
   - **Key Concepts:** `for` loops, `continue` statement, modular function design, function prototypes.

4. **Laptop_Bypass_Charging_Checker.c**
   - **Purpose:** Evaluates battery level to determine the laptop's charging state.
   - **Logic:** Takes a battery percentage input and passes it to a user-defined function. It identifies if the battery is fully charged (activating bypass charging) or currently charging, while rejecting out-of-bounds values.
   - **Key Concepts:** User-defined functions, argument passing, `if-else` control structures.

5. **Martial_Arts_Weight_Category.c**
   - **Purpose:** Categorizes a martial arts competitor based on their weight in kilograms.
   - **Logic:** Employs an `if-else if-else` ladder combined with logical operators to classify weight profiles into predefined brackets (Lightweight, Middleweight, Heavyweight).
   - **Key Concepts:** Relational operators, logical AND (`&&`) operators, multi-conditional branching.

## How to Compile and Run

To compile any of the programs using a standard C compiler (such as GCC), run the following command in your terminal: