/*
  Program: Driving License Eligibility Checker
  Logic: Uses scanf return value (!= 1) to catch non-numeric inputs.
  Purpose: Ensures robust error handling before processing age logic.
 */
#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");

    // For invalid input
    if (scanf("%d", &age) != 1)
    {
        printf("Please enter a valid input, and try again\n");
        return 1;
    }

    if (age < 0 || age > 100)
    {
        printf("Invalid Age\n");
    }
    else if (age < 16)
    {
        printf("You are under age you cannot apply for DL\n");
    }
    else if (age >= 16 && age < 18)
    {
        printf("You can apply for Learning Licence\n");
    }
    else if (age >= 18 && age < 20)
    {
        printf("You can apply for the DL\n");
    }
    else if (age >= 20 && age < 90)
    {
        printf("You can apply for both commercial and personal DL\n");
    }
    else
    {
        printf("You cannot apply for the DL anymore, stay home and stay healthy\n");
    }
    
    
    return 0;
}