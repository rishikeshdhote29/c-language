#include<stdio.h>
int main()
{ int a;
  printf("enter a number:");
  scanf("%d",&a);
 if (a%3==0&&a%2==0)
{
    printf("it is multiple of 2and 3");
}
 else if (a%2==0)
 {
    printf("it is multiplae of 2");
  }
else if (a%3==0)
{
    printf("it is multiple of three");
}
else{
    printf("it is not a multiple of 2and 3");
}
return 0 ;}