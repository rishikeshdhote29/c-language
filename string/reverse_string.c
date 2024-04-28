#include <stdio.h>
int main()
{
    char str[10];
    int i, l = 0;
    printf("enter your name ");
    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; i++);
     for(i;i>=0;i--)
     printf("%c",str[i]);
    return 0;
}