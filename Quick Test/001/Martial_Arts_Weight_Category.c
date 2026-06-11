/*
Author: Dibyajyoti Mishra

Purpose: Categorizes a martial arts competitor based on their weight in kilograms.
Logic: Employs an if-else if-else ladder combined with logical operators to classify weight profiles into predefined brackets (Lightweight, Middleweight, Heavyweight).
Key Concepts: Relational operators, logical AND (&&) operators, multi-conditional branching.
*/
#include <stdio.h>

int main(){
    float fighter_weight;

    printf("Enter Fighter's weight in KG: ");
    if (scanf("%f", &fighter_weight) != 1)
    {
        printf("Please enter a valid weight: ");
        return 1;
    }
    if (fighter_weight < 60){
        printf("Light weight\n");
    }
    else if(fighter_weight >= 60 && fighter_weight < 75){
        printf("Middleweight\n");
    }
    else if (fighter_weight >= 75)
    {
        printf("Heavyweight\n");
    }
    else{
        printf("Invalid age\n");
    }
    
    
    return 0;
}
