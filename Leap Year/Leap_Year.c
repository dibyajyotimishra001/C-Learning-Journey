/*
 * Leap Year Checker
 * Author: Raj
 * Description: A simple C program that takes a year as input from the user 
 * and determines whether it is a leap year based on standard Gregorian calendar rules.
 */
#include <stdio.h>

int main(){
    int year;
    printf("Input a year: ");
    
    if (scanf("%d", &year) != 1)
    {
        printf("Enter a valid year");
        return 1;
    }
    

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }
    return 0;
}