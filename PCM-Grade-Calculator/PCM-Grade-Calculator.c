/* ============================================================================
 * Project Name : JEE Mains Grade Calculator
 * Author       : Dibyajyoti Mishra
 * Description  : This program calculates the total marks, percentage, and 
 *                determines the grade (A+ to E) based on PCM marks. It 
 *                includes strict input validation and logical range checks.
 * ============================================================================ */

// Design for JEE Mains
#include <stdio.h>

int main(){
    float phy, che, math;
    
// Checking for correct input

    printf("Enter the mark of Phy: ");
    if(scanf("%f", &phy) != 1){
        printf("Invalid input, please enter a valid input\n");
        return 1;
    }

    printf("Enter the mark of Che: ");

    if(scanf("%f", &che) != 1){
        printf("Invalid input, please enter a valid input\n");
        return 1;
    }
    
    printf("Enter the mark of Math: ");

    if(scanf("%f", &math) != 1){
        printf("Invalid input, please enter a valid input\n");
        return 1;
    }
    float total_mark = phy + che + math;
    float total_percentage = (total_mark * 100)/ 300;

    if (phy > 100 || phy < 0 || che > 100 || che < 0 || math > 100 || math < 0){ // creating a scale
        printf("Please enter a valid marks\n");
        return 1;
    }
    
    if((phy >= 33 && che >= 33 && math >= 33) && total_percentage >= 40) 
    {
        printf("You passed the examination\n");

        if (total_percentage >= 90)
        {
            printf("Grade - A+\n");
        }
        else if (total_percentage >= 80)
        {
            printf("Grade - A\n");
        }
        else if (total_percentage >= 70)
        {
            printf("Grade - B\n");
        }
        else if (total_percentage >= 60)
        {
            printf("Grade - C\n");
        }
        else if (total_percentage >= 50)
        {
            printf("Grade - D\n");
        }
        else if (total_percentage >= 40)
        {
            printf("Grade - E\n");
        }
    }
    else
    {
        printf("You failed the examination\n");
    }
    

    return 0;
}
