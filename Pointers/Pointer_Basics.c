#include <stdio.h>

int main(){
    int num_1 = 6;
    int* num_2 = &num_1;

    // Prints the address using correct format specifier %p
    printf("The address of num_1 is %p\n", (void*)&num_1);

    // Value of pointer num_2 (which is the address of num_1)
    printf("The value of num_2 is %p\n", (void*)num_2);

    // Dereferencing the pointer to get the value
    printf("The address stored in num_2 is %p and the value at that address is %d\n", (void*)num_2, *num_2);

    // Address of the pointer itself
    printf("The address of pointer num_2 itself is %p\n", (void*)&num_2);

    return 0;
}