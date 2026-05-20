#include <stdio.h>
int calc_episodes(int n);
int calc_episodes(int n){
    if (n == 0){
        return 0;
    }
    return n + calc_episodes(n - 1);
}

int main(){
    int n;
    printf("Enter the day num: ");

    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    
    printf("%d\n", calc_episodes(n));
    return 0;
}