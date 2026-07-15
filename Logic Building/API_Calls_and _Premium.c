#include <stdio.h>

int main(){
    int free_tier = 1000, pro_tier = 50000, Enter_price = 200000; //api
    int is_non_profit = 0, choice, api_calls = 0;
    printf("Select 1/2/3\n1. Free Tier\n2. Pro Tier\n3. Enter Price\n");

    printf("Enter your choice: ");
    if(scanf("%d", &choice) != 1){
        printf("Invalid Input\n");
        return 1;
    }
    printf("Enter your api calls: ");
    if(scanf("%d", &api_calls) != 1){
        printf("Invalid Input\n");
        return 1;
    }

    if(choice == 0){
        printf("\nYou cannot use for 5 hours\n");
    }
    else if(choice == 1){
        printf("\nYour API Limit per month : %d\n", free_tier);
    }
    else if(choice == 2){
        printf("Your API Limit per month : %d\n", pro_tier);
    }
    else if(choice == 3){
        printf("\nYour API Limit per month : %d\n", Enter_price);
    }
    else{
        printf("\nInvalid no\n");
        return 1;
    }

    if (choice == 1 && api_calls < 200)
    {
        printf("Congrats, you are shifted to a pro user\n");
        is_non_profit = 1;
        choice = 2;
    }
    if (choice == 2 && api_calls > pro_tier)
    {
        printf("You are shifted to Free tier due to excess use\n");
        choice = 1;
    }
    else if (choice == 3 && api_calls > Enter_price)
    {
        printf("You are shifted to Pro tier due to excess use\n");
        choice = 2;
    }
    else if (choice == 1 && api_calls > free_tier)
    {
        printf("You can not use till 5 hours due to excess use\n");
        choice = 0;
    }
    
    
    return 0;
}