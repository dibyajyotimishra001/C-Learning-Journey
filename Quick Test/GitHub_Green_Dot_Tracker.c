#include <stdio.h>

void green_dot();
void green_dot(){
    printf("Green Dot Secured\n");
}
int user_inp(int);
int user_inp(int day){
    int commits;

    printf("Day %d:- Enter your number of commits: ", day);
    
    // Check if input is valid
    if (scanf("%d", &commits) != 1) {
        printf("Invalid input. Assuming 0 commits.\n");
        return 0; // Returning 0 for error so it skips safely
    }
    
    return commits;
}
int main(){
    int week = 7;

    for (int i = 1; i <= week; i++)
    {
        int commits = user_inp(i);

        if (commits == 0)
        {
            continue;
        }
        
        if (commits > 0){
            green_dot();
        }
    }
    
    return 0;
}