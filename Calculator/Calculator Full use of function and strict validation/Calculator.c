/*
 * Project: Advanced CLI Calculator in C
 * Author: Raj (Dibyajyoti Mishra)
 * Description: A robust command-line calculator utilizing modular functions.
 *
 * Key Points:
 * 1. 100% self-created in VS Code with honest use of 0% AI assistance.
 * 2. 100% original logic building by the author.
 * 3. Uses a separate function for arithmetic operations.
 * 4. Validates inputs for both numbers and operators.
 * 5. Prevents division by zero at the execution level.
 */
#include <stdio.h>

float calculator(float, char, float);
float calculator(float num_1, char operator, float num_2){

    if (operator == '+'){
        return num_1 + num_2;
    }
    else if (operator == '-'){
        return num_1 - num_2;
    }
    else if (operator == '*'){
        return num_1 * num_2;
    }
    else if (operator == '/'){
        if (num_2 == 0){
            return 1;
        }
        else{
            return num_1 / num_2;
        }
    }
}

int main(){
    float num_1, num_2;
    char operator;
    printf("Use + or - or * or / as operator\n\n");
    printf("Enter the 1st num: ");
    if(scanf("%f", &num_1) != 1){
        printf("Invalid input, please enter a valid number\n");
        return 1;
    }

    printf("Enter the operator: ");
    if(scanf(" %c", &operator) != 1){
        printf("Invalid operator, please select a valid operator\n");
        while ((getchar()) != '\n');
        return 1;
    }

    if(operator != '+' || operator != '-' || operator != '*' || operator != '/'){
        printf("Invalid operator, please use instructed operators\n");
        return 1;
    }  

    printf("Enter the 2nd num: ");
    if(scanf("%f", &num_2) != 1){
        printf("Invalid input, please enter a valid number\n");
        return 1;
    }
    if (operator == '/' && num_2 == 0){
        printf("0 cannot be divided\n");
        return 1;
    }
    printf("%f %c %f = %lf", num_1, operator, num_2, calculator(num_1, operator, num_2));


    return 0;
}
