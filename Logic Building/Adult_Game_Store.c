#include <stdio.h>

int main(){
    int age;
    float item_price = 2500, wallet_balance; // Item price only for gta v
    char adult_game[] = "GTA V";
    float final_price = item_price + (item_price * 1) / 100; // 1% fee

    printf("Enter your age: ");
    if(scanf("%d", &age) != 1){
        printf("Invalid Input\n");
        return 1;
    }

    printf("Enter your wallet balance: ");
    if(scanf("%f", &wallet_balance) != 1){
        printf("Invalid Input\n");
        return 1;
    }

    if(age > 100 || age < 0){
        printf("Invalid age\n");
        return 1;
    }
    else if (age < 18)
    {
        printf("Error: Age Restriction\n");
        return 1;
    }
    else if (age >= 18 && wallet_balance >= final_price)
    {
        printf("Transaction Approved\nItem Purchased\n"); // success
        printf("Your total cost: %f\n", final_price); 
        return 1;
    }
    else if (age >= 18 && wallet_balance < final_price)
    {
        printf("Error: Insufficient Funds\n");
        return 1;
    }
    else{
        printf("Error\n");
    }
    

    return 0;
}