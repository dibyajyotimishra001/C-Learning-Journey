#include <stdio.h>

int main(){
    int arr[3][10];
    int num[3];
    printf("Enter 3 nums by single space to create multiplication matrix: ");
    if(scanf("%d %d %d", &num[0], &num[1], &num[2]) != 3){
        printf("Invalid input!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = num[i] * (j + 1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("arr[%d][%d] is  %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }


    
    return 0;
}