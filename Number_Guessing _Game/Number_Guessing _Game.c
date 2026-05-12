/*
 * Project Name: Number Guessing Game
 * Author: Dibyajyoti Mishra
 * Description: A simple and interactive command-line game written in C. 
 * The player has to guess a randomly generated number between 
 * 1 and 10. The program provides hints (higher/lower) after 
 * each guess and tracks the total number of attempts.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rand_num;
    int guessed, number_of_guess = 0;

    srand(time(0));          // seed the random generator
    rand_num = rand() % 10 + 1;  // number from 1 to 10

    
    do
    {
        printf("Guess a num between 1 to 10: ");

        if (scanf("%d", &guessed) != 1)
        {
            printf("Invalid input, please enter a valid no.\n");
            return 1;
        }
        if (guessed < 1 || guessed > 10)
        {
            printf("please enter a valid no. between 1 to 10\n");
            return 1;
        }

        if (guessed < rand_num)
        {
            printf("Guess higher number please\n");
        }
        else if (guessed > rand_num){
            printf("Guess lower number please\n");
        }
        
        number_of_guess++;

        
    } while (guessed != rand_num);
    
    printf("You guessed the num\n");
    printf("You guessed the num in %d attempts!\n", number_of_guess);

    return 0;
}