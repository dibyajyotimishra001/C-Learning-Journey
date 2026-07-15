#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Possible values
    int codes[] = {200, 201, 202, 400, 401, 403, 404, 500, 502, 503}; //HTTP status codes

    // Seed the random number generator
    srand(time(NULL));

    // Randomly select one value
    int randomCode = codes[rand() % 10];

    if(randomCode == 200 || randomCode == 201 || randomCode == 202){
        printf("Success: Proceed to UI\n");
    }
    else if(randomCode == 400 || randomCode == 401 || randomCode == 403 || randomCode == 404){
        printf("Client Error: Log and Alert\n");
    }
    else if(randomCode == 500 || randomCode == 502 || randomCode == 503){
        printf("Server Fault: Initiate Failover\n");
    }

    return 0;
}