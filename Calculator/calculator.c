/*
 * Project: CLI Calculator in C
 * Author: Raj (Dibyajyoti Mishra)
 * Description: A reliable command-line calculator focused on memory safety and clean UI.
 *
 * Key Points:
 * 1. Handles arithmetic operations (+, -, *, /) with float numbers.
 * 2. Implements input validation on all inputs to prevent crashes.
 * 3. Manages the stdin buffer space to avoid skipped char selections.
 * 4. Checks for division by zero errors before execution.
 * 5. Uses strict 2-decimal formatting (%.2f) for clean output.
 */
#include <stdio.h>

int main(){
    float num_1, num_2;
    char operator;
    char extra;

    printf("\nEnter the 1st num: ");
    if(scanf("%f", &num_1) != 1){
        printf("Invalid input, please enter a valid num\n");
        return 1;
    }

    printf("\nEnter the operator (+ or - or  * or /): ");
    // Read the operator character
    if(scanf(" %c", &operator) != 1){
        printf("Invalid input, please enter a valid operator\n");
        return 1;
    }

    
    if (scanf("%c", &extra) == 1 && extra != '\n') {
        printf("Invalid input, please enter only a single valid operator\n");
        // Clear the remaining garbage characters from the buffer
        while ((getchar()) != '\n');
        return 1;
    }

    printf("\nEnter the 2nd num: ");
    if(scanf("%f", &num_2) != 1){
        printf("Invalid input, please enter a valid num\n");
        return 1;
    }

    if (operator == '+'){
        printf("%.2f %c %.2f = %.2f\n", num_1, operator, num_2, (num_1 + num_2));
    }
    else if (operator == '-'){
        printf("%.2f %c %.2f = %.2f\n", num_1, operator, num_2, (num_1 - num_2));
    }
    else if (operator == '*'){
        printf("%.2f %c %.2f = %.2f\n", num_1, operator, num_2, (num_1 * num_2));
    }
    else if (operator == '/'){
        if (num_2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            printf("%.2f %c %.2f = %.2f\n", num_1, operator, num_2, (num_1 / num_2));
        }
    }
    else{
        printf("Something went wrong, you may have entered some wrong input\n");
    }

    return 0;
}