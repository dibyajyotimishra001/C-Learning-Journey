/*
 * Program: Factorial Calculator
 * Author: Raj
 * Description: This program calculates the factorial of a given integer
 * using a recursive function approach.
 *
 * Highlighted Feature (Zero Error Handling Effort): 
 * The program implements robust input validation. By explicitly checking 
 * the return value of scanf() (i.e., ensuring it equals 1), the program 
 * successfully prevents undefined behavior or crashes that would normally 
 * occur if the user inputs non-integer data types (like characters or strings).
 */
#include <stdio.h>
int factorial(int);
int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}
int main(){
    int num;
    
    printf("Enter a num to find factorial: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input, please enter a valid no\n");
        return 1;
    }

    printf("%d! = %d", num, factorial(num));

    return 0;
}