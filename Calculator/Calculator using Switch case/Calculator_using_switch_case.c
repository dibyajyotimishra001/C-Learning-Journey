#include <stdio.h>

int main(){
    char operator;
    int num_1, num_2;

    printf("Enter the 1st num: ");
    if (scanf("%d", &num_1) != 1)
    {
        printf("Invalid num, please use int\n");
        return 1;
    }
    
    while (getchar() != '\n');

    printf("Enter the operator: ");
    scanf("%c", &operator);

    while (getchar() != '\n');

    if(operator != '+' && operator != '-' && operator != '*' && operator != '/'){
        printf("Invalid input, plese select a operator as instructed\n");
        return 1;
    }
    printf("Enter the 2nd num: ");
    if (scanf("%d", &num_2) != 1)
    {
        printf("Invalid num, please use int\n");
        return 1;
    }
    

    switch (operator)
    {
    case '+':
        printf("%d %c %d = %d", num_1, operator, num_2, (num_1 + num_2));
        break;
    case '-':
        printf("%d %c %d = %d", num_1, operator, num_2, (num_1 - num_2));
        break;
    case '*':
        printf("%d %c %d = %d", num_1, operator, num_2, (num_1 * num_2));
        break;
    case '/':
        if(num_2 == 0){
            printf("0 Cannot be divided\n");
        }
        else{

            printf("%d %c %d = %d", num_1, operator, num_2, (num_1 / num_2));
        }
        break;
    
    default:
        break;
    }
    return 0;
}