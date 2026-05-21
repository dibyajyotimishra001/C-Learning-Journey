#include <stdio.h>

int main(){
    int total_attempt = 3, attempt_num = 1;
    int correct_pin = 1234;
    int inp_pin;

    while (attempt_num <= total_attempt)
    {
        printf("Enter your inp_pin: ");

        if(scanf("%d", &inp_pin) != 1){
            printf("Invalid input, please enter a valid input\n");
            return 1;
        }
        if(inp_pin < 1000 || inp_pin > 9999){
        printf("Invalid pin length, please enter your correct pin\n");
        return 1;
        }
        int remaing_attempts;
        remaing_attempts = total_attempt - attempt_num;

        if (inp_pin == correct_pin){
            printf("Access Granted!");
            break;
        }
        else{
            printf("Access Denied. Attempt remaing %d\n", remaing_attempts);
        }
        
        attempt_num++;
    }
    
    if (attempt_num > 3){
        printf("Access Denied, Acount Blocked!\n");
        return 1;
    }
    

    return 0;
}