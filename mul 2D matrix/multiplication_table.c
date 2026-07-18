#include <stdio.h>

int main(){
    int num_1;

    printf("Enter a num to generate multiplication table: ");
    if(scanf("%d", &num_1) != 1){
        printf("Invalid num\n");
        return 1;
    }

    FILE *ptr;
    ptr = fopen("multiplication_table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", num_1, i, (num_1 * i));
    }
    fclose(ptr);
    return 0;
}