#include<stdio.h>
int main    ()
{ 
    char ch;

    printf(" enter a charecter : ");
    scanf("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
    printf("it is a vowel");
}
else{
    printf("not a vowel");
    }
     return 0;
}