#include <stdio.h>

void swap(int*, int*); // Using call by reference
void swap(int* num1, int* num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

int main(){
    int num_1 = 5, num_2 = 8;
    
    printf("The value of num 1 is %d and value of num 2 is %d\n", num_1, num_2);

    swap(&num_1, &num_2);
    printf("The value of num 1 is %d and value of num 2 is %d\n", num_1, num_2);
    
    return 0;
}
