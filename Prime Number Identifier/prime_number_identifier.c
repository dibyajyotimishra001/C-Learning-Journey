#include <stdio.h>

int main(){
    int isPrime = 1, n; // assuming as prime number

    printf("Enter a num to check wheatear it is a prime no. or not: ");

    if (scanf("%d", &n) != 1)
    {
        printf("Enter a valid number");
        return 1;
    }
    if (n<=1)
    {
        printf("Please try with another number grater than 1");
        return 1;
    }
    

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0; // make it false
            break;
        }
        
    }
    if (isPrime)
    {
        printf("It's a prime number");
    }
    else{
        printf("It's not a prime number");
    }
    
    
    
    return 0;
}