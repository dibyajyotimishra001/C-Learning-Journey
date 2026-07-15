#include <stdio.h>

int main(){
    float account_balance = 100000, machine_cash_reserves = 1000000; 
    int is_account_locked = 0, requested_amount;

    printf("Enter the amount or withdraw: ");
    if(scanf("%d", &requested_amount) != 1){
        printf("Invalid input\n");
        return 1;
    }

    if (is_account_locked == 0)
    { 
        if (requested_amount < 0)
        {
            printf("Cannot be withdraw negetive amount\n");
            return 1;
        }
        
        else if(requested_amount > account_balance || requested_amount > machine_cash_reserves){
            printf("Error: Cannot withdraw amount more than balance\n");
            return 1;
        }
        else if ((requested_amount % 100) != 0)
        {
            printf("Please enter a amount multiple of 100\n");
            return 1;
        }
        else if (requested_amount < account_balance)
        {
            printf("Success: %d withdrawed\n", requested_amount);
        }
        else{
            printf("Something went wrong! Try again\n");
            return 1;
        }  
    }
    else{
        printf("Your account is locked\n");
        return 1;
    }
    
    
    return 0;
}