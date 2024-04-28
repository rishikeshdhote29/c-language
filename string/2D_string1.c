#include<stdio.h>
int main()
{ char  str [5][10];
int i;
 for(i=0;i<5;i++)
 {printf("enter name:");
  scanf("%s",str[i]);


 }
    for(i=0;i<5;i++)
    {printf("\n hello %s",str[i]);


    }
    return 0;

}