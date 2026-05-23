/*
 * Program: Bill Splitter with GST Calculator
 * Author: Dibyajyoti Mishra (Raj)
 * Description: This program calculates the final amount each person 
 *              needs to pay from a total bill, including an 18% GST.
 * Error Handling: 
 *  - Validates user input to ensure integers and floats are entered correctly.
 *  - Prevents division by zero errors by checking if the number of friends is 0.
 *  - Prevents negative inputs for both friends and bill amounts.
 */

#include <stdio.h>

int main(){
    int number_of_friends;
    float total_bill_amount, total_bill_gst, amount_per_person;

    printf("Enter num of friends: ");
    // Checking for valid input and preventing division by zero or negative friends
    if(scanf("%d", &number_of_friends) != 1 || number_of_friends <= 0){
        printf("Error: Something went wrong. Number of friends cannot be zero, negative, or text.\n");
        return 1;
    }

    printf("Enter the total bill: ");
    // Checking for valid float input and preventing negative bill amounts
    if(scanf("%f", &total_bill_amount) != 1 || total_bill_amount < 0){
        printf("Error: Something went wrong. Bill amount cannot be negative or text.\n");
        return 1;
    }

    total_bill_gst = total_bill_amount + (total_bill_amount * (18.0/100.0));
    amount_per_person = total_bill_gst / number_of_friends;

    printf("Here is your final bill inc. 18%% of gst: %.2f\n", amount_per_person);

    return 0;
}