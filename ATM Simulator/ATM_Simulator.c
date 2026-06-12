#include <stdio.h>

int main()
{
    int choice;
    float balance = 100000.0, add_balance, withdraw;
    while (1)
    {
        printf("\nChoose 1/2/3/4 to continue\n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid choice, please select correct choice\n");
            return -1;
        }

        if (choice == 1)
        {
            printf("Balance: %f\n", balance);
        }
        else if (choice == 2)
        {
            printf("Your current balance: %f\n", balance);
            printf("Enter the amount to add: ");
            if (scanf("%f", &add_balance) != 1)
            {
                printf("Invalid input, please enter a valid num\n");
                return 1;
            }
            balance += add_balance;
            printf("Success\nCurrent Balance: %f", balance);
        }
        else if (choice == 3)
        {
            printf("Your current balance: %f\n", balance);
            if (scanf("%f", &withdraw) != 1)
            {
                printf("Invalid input, please enter a valid num\n");
                return 1;
            }
            if (withdraw > balance)
            {
                printf("You have not sufficient balance to withdraw\n");
                return 1;
                break;
            }
            else
            {
                balance -= withdraw;
                printf("Success\nCurrent Balance: %f", balance);
            }
        }
        else if (choice == 4)
        {
            printf("Successfully Exited\n");
            break;
        }
        else
        {
            printf("You selected nothing, please try again\n");
        }
    }

    return 0;
}