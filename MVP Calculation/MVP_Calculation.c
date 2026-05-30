#include <stdio.h>

float kda_calculation(int, int, int);

float kda_calculation(int kills, int deaths, int assists){
    float effective_death, kda;
    if (deaths == 0){
        effective_death = 1.0;
    }
    else{
       effective_death = (float)deaths;
    }
    kda = (kills + assists) / effective_death;

    return kda;
}

int mvp_calculation(int, int, int);
int mvp_calculation(int kills, int deaths, int assists){
    int kill_point, assist_point, death_penality, mvp;

    kill_point = kills * 5;
    assist_point = assists * 3;
    death_penality = deaths * 2;

    mvp = (kill_point + assist_point) - death_penality;
    return mvp;
}
int main(){
    int kills, deaths, assists;
    
    printf("Enter your kills: ");
    if(scanf("%d", &kills) != 1){
        printf("Invalid input, please enter a valid number\n");
        return 1;
    }
    
    printf("Enter your assists: ");
    if(scanf("%d", &assists) != 1){
        printf("Invalid input, please enter a valid number\n");
        return 1;
    }
    printf("Enter your deaths: ");
    if(scanf("%d", &deaths) != 1){
        printf("Invalid input, please enter a valid number\n");
        return 1;
    }

    printf("Your KDA: %.2f\n", kda_calculation(kills, deaths, assists));
    printf("Your MVP score: %d\n", mvp_calculation(kills, deaths, assists));


    return 0;
}