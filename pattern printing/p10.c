#include<stdio.h>
int main()

  { int i,j,n;

  for(i=1;i<=4;i++)
{
    for(j=4;j>=i;j--)
    printf(" ");
    for(n=1;n<=i;n++)
    printf("%d",n);
    printf("\n");

}

    return 0;
}