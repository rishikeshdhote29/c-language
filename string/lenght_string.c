#include <stdio.h>
int main()
{
    char str[10];
    int i,l=0;
    printf("enter your name ");
    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    printf("lenght of string is %d",l);
    return 0;
}