/*
Author: Dibyajyoti Mishra

Purpose: Evaluates battery level to determine the laptop's charging state.
Logic: Takes a battery percentage input and passes it to a user-defined function. It identifies if the battery is fully charged (activating bypass charging) or currently charging, while rejecting out-of-bounds values.
Key Concepts: User-defined functions, argument passing, if-else control structures.
*/
#include <stdio.h>
void check_bypass(int battery_level);
void check_bypass(int battery_level){
    if (battery_level > 100 || battery_level < 0){
        printf("Invalid battery level\n");
    }
    else if(battery_level == 100){
        printf("Battery Status: Bypass Charging in progress\n");
    }
    else{
        printf("Battery Status: Charging\n");
    }
    
}
int main(){
    
    int battery_level;

    printf("Enter you battery level: ");
    if (scanf("%d", &battery_level) != 1)
    {
        printf("Invalid Input, Please enter correct battery level\n");
        return 1;
    }

    check_bypass(battery_level);
    return 0;
}
