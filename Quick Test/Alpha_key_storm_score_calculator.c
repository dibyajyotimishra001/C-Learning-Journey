/*
Author: Dibyajyoti Mishra

Purpose: Calculates a user's net typing score for the 'Alpha Keystorm' game.
Logic: Accepts total words and total errors as input. It validates that inputs are numeric and that errors are non-negative and do not exceed total words, then subtracts errors from total words to produce the score.
Key Concepts: Variable declaration, scanf() input validation, arithmetic subtraction, conditional checks.
*/
#include <stdio.h>

int main(){
    int total_words, total_errors;

    printf("Enter total word: ");
    if (scanf("%d", &total_words) != 1)
    {
        printf("Please enter a valid num\n");
        return 1;
    }
    
    printf("Enter total errors: ");
    if (scanf("%d", &total_errors) != 1)
    {
        printf("Please enter valid errors\n");
        return 1;
    }
    if (total_errors > total_words || total_errors < 0)
    {
        printf("Invalid error input");
        return 1;
    }
    

    printf("Your Score: %d\n", (total_words - total_errors));

    return 0;
}
