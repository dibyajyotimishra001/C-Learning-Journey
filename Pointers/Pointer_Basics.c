#include <stdio.h>

int main(){
    int num_1 = 6;
    int* num_2 = &num_1;

    printf("The adderess of num_1 is %u\n", &num_1); // Prints an address

    printf("The adderess of num_1 is %p\n", &num_1); // prints unsigned decimal integer

    printf("The value of num_2 is %u\n", num_2);
    printf("The value of num_2 is %u and at address %d\n", num_2, *num_2);

    // Address of num_1

    printf("The address of num_1 is %u", &num_2);

    return 0;
}