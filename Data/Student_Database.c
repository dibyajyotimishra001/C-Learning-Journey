#include <stdio.h>
#include <string.h>

typedef struct SSVM
{
    char name[30];
    float mark;
    int roll_no;
}svm;


int main(){
    int roll = 2526001;
    
    svm *ptr;
    svm student[5];
    ptr = student;

    strcpy(student[0].name, "Mohit");
    strcpy(student[1].name, "Rohit");
    strcpy(student[2].name, "Essam");
    strcpy(student[3].name, "Harry");
    strcpy(student[4].name, "Shubham");

    student[0].mark = 56;
    student[1].mark = 77;
    student[2].mark = 69;
    student[3].mark = 89;
    student[4].mark = 53;

    for (int i = 0; i < 5; i++)
    {
        student[i].roll_no = roll;
        roll++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s\nRoll No: %d\nMark: %f\n\n", ptr->name, ptr->roll_no, ptr->mark);
        ptr++;
    }
    
    
    return 0;
}