#include<stdio.h>
struct student 
{
    int roll;
    char grade;
    float per;
};
typedef struct student student;

int main ()
{ student s;    student arr[5];

 
    printf("enter a student detail");
    scanf("%d %c %f",&s.roll,&s.grade,&s.per);

    printf("%d %c %f", s.roll, s.grade, s.per);
    return 0;
}