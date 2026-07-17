#include <stdio.h>
#include <string.h>

typedef struct employee{
    int salary, code;
    char name[30], branch[30];
}emp;

int main(){
    int code = 2627001;
    emp employe[3];
    for (int i = 0; i < 3; i++)
    {
        employe[i].salary = 200000;
        employe[i].code = code;
        code++;
        strcpy(employe[i].branch, "Software Engineer");
    }
    strcpy(employe[0].name, "Rohan");
    strcpy(employe[1].name, "Shubham");
    strcpy(employe[2].name, "Harry");
    
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\nBranch: %s\nCode: %d\nSalary: %d\n\n", employe[i].name, employe[i].branch, employe[i].code, employe[i].salary);
    }
    

    return 0;
}