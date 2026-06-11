#include <stdio.h>

int main(){
    int choise;
    float balance = 100000.0, add_balance, withdraw;
    while (1)
    {
        printf("\nChoose 1/2/3/4 to continue\n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");

        printf("\nEnter your choise: ");
        if(scanf("%d", &choise) != 1){
            printf("Invalid choise, plese select correct choise\n");
            return 1;
            break;
        }


        if(choise == 1){
            printf("Balance: %f\n", balance);
        }
        else if (choise == 2)
        {
            printf("Your current balance: %f\n", balance);
            printf("Enter the amount to add: ");
            if(scanf("%f", &add_balance) != 1){
                printf("Invalid input, plese enter a valid num\n");
                return 1;
            }
            balance += add_balance;
            printf("Success\nCurrent Balance: %f", balance);
        
        }
        else if (choise == 3)
        {
            printf("Your current balance: %f\n", balance);
            if(scanf("%f", &withdraw) != 1){
                printf("Invalid input, plese enter a valid num\n");
                return 1;
            }
            if(withdraw > balance){
                printf("You have not sufficient balance to withdraw\n");
                return 1;
                break;
            }
            else{
                balance -= withdraw;
                printf("Success\nCurrent Balance: %f", balance);
            }

        }
        else if (choise == 4)
        {
            printf("Successfully Exited\n");
            break;
        }
    }
        
    
    return 0;
}