/*
Project: Percentage to Grade Converter
Description: This program takes a student's percentage as input and calculates their respective grade.
Features:
- Input Validation: Checks if the entered input is a valid numeric value to prevent crashes.
- Boundary Checking: Ensures the percentage strictly falls within the logical 0 to 100 range.
- Clean Logic: Uses top-down conditional logic for efficient and readable grade evaluation.
*/

#include <stdio.h>

int main(){
    float percentage;
    printf("Enter your percentage: ");

    if(scanf("%f", &percentage) != 1){
        printf("Invalid Input, please enter a valid number and try again\n");
        return 1;
    }

    
    if (percentage > 100 || percentage < 0)
    {
        printf("Invalid Percentage, Please input a valid Number.\n");
        return 1;
    }
    
    else if (percentage >= 90)
    {
        printf("Grade - A1\n");
        printf("Outstanding\n");
        printf("Congratulations, You scored the best result\n");
    }
    else if (percentage >= 80)
    {
        printf("Grade - A2\n");
        printf("Excellent\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade - B1\n");
        printf("Very Good\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade - B2\n");
        printf("Good\n");
    }
    else if (percentage >= 50)
    {
        printf("Grade - C1\n");
        printf("Above Average\n");
    }
    else if (percentage >= 40)
    {
        printf("Grade - C2\n");
        printf("Above Average\n");
    }
    else if (percentage >= 33)
    {
        printf("Grade - D\n");
        printf("Pass\n");
    }
    else if (percentage >= 21)
    {
        printf("Grade - E1\n");
        printf("Fail (Needs Improvement)\n");
    }
    else
    {
        printf("Grade - E2\n");
        printf("Fail\n");
    }
    if (percentage >=0 && percentage < 33)
    {
        printf("You failed the examination, try your best next time\n");
    }
    
    
    
    return 0;
}