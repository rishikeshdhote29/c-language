#include <stdio.h>
#include <math.h>
int main()
{
  int num, x, sum = 0, rem;
  printf("enter a number:");
  scanf("%d", &num);

  x = num;
  for (; num > 0;)
  {
    rem = num % 10;
    sum = sum + rem * rem * rem;
    num /= 10;
  }

  if (sum == x)
  {
    printf(" armstrong num");
  }
  else
    printf("not armstrong num");

  return 0;
}