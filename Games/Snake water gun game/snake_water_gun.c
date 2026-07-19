#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    // snake = 1
    // water = 2
    // gun = 3
int main(){

    // Seed the random number generator
    srand(time(NULL));
    while (1)
    {
        // Generate a random number between 1 and 3
        int computer = rand() % 3 + 1;

        int user_choice;
        printf("\nChoose Snake / Water / Gun\n");
        
        printf("Use 1->snake, 2->water, 3->gun: ");
        if (scanf("%d", &user_choice) != 1){
            printf("Invalid input, please enter as instructured!\nRestart again");
            return 1;
        }

        printf("\n");
        if(user_choice == 1 && computer == 1){
            printf("Draw! You both choose snake\n");
        }
        else if(user_choice == 1 && computer == 2){
            printf("You won\ncomputer choose: water");
        }
        else if(user_choice == 1 && computer == 3){
            printf("You lose\ncomputer choose: gun");
        }
        else if(user_choice == 2 && computer == 1){
            printf("You lose\ncomputer choose: snake");
        }
        else if(user_choice == 2 && computer == 2){
            printf("Draw! You both choose water\n");
        }
        else if(user_choice == 2 && computer == 3){
            printf("You win\ncomputer choose: gun");
        }
        else if(user_choice == 3 && computer == 1){
            printf("You win\ncomputer choose: snake");
        }
        else if(user_choice == 3 && computer == 2){
            printf("You lose\ncomputer choose: water");
        }
        else if(user_choice == 3 && computer == 3){
            printf("Draw! You both choose gun\n");
        }
        else{
            printf("Somthing went wrong!\n");
        }
        
    }
        return 0;
    }