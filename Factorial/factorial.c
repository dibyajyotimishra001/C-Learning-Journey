/*
 * Program: Factorial Calculator (Iterative Approach)
 * Author: Raj
 * Description: This program calculates the factorial of a given integer
 * using an iterative for-loop approach.
 *
 * Highlighted Features (Error Handling):
 * 1. Data Type Validation: Checks the return value of scanf() to ensure
 *    the user inputs a valid integer, preventing undefined behavior.
 * 2. Negative Value Handling: Explicitly checks if the inputted number 
 *    is negative and stops execution, as factorials for negative 
 *    numbers are not defined.
 */
#include <stdio.h>

int main(){
    int factorial = 1, num;

    printf("Enter a num to find factorial: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invali input, please enter a valid number\n");
        return 1;
    }
    if(num < 0 ){
        printf("Please enter a num greater than 0");
        return 1;
    }

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    
    printf("%d! = %d", num, factorial);

    return 0;
}