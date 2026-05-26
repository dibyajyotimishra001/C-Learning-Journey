#include <stdio.h>

int factorial(int);

int factorial(int num) {
    if (num == 1 || num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int loop = 1;
    
    while (loop == 1) {
        int num;
        
        printf("\nEnter a number to find factorial (or a negative number to exit): ");
        
        int status = scanf("%d", &num);
        
        if (status != 1) {
            printf("Invalid input! Please enter a valid integer.\n");
            while (getchar() != '\n'); 
            continue;
        }
        
        // Exit condition
        if (num < 0) {
            printf("Exiting the Domain. Malevolent Shrine collapses!\n");
            break;
        }
        
        // Prevent integer overflow
        if (num > 12) {
            printf("Result fits best within standard 32-bit int for numbers up to 12.\n");
            continue;
        }
        
        printf("%d! = %d\n", num, factorial(num));
    }
    return 0;
}