#include <stdio.h>
int main()
{
    char str[10];
    int i;
    printf("enter your name ");
    scanf("%s", &str);
for(i=0;str[i]!='\0';i++)
{
    printf("\n%c",str[i]);


}
    return 0;
}