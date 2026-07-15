#include <stdio.h>

int main()
{
    int num_command;
    while (1)
    {
        printf("Enter the commands in no: ");
        if (scanf("%d", &num_command) != 1)
        {
            printf("Invalid Input\n");
            return 1;
        }

        switch (num_command)
        {
        case 1:
            printf("Lights are turned on.\n");
            break;
        case 2:
            printf("Lights are turned off.\n");
            break;
        case 3:
            printf("Set AC to 22 degrees.\n");
            break;
        case 4:
            printf("Lock the front door.\n");
            break;

        default:
            printf("Alert: Wrong code\n");
            break;
        }
    }
    return 0;
};
