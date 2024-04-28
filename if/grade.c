#include<stdio.h>
int main()
{ int m,p,c,sum,per;
  printf("enter a maths number:");
  scanf("%d",&m);
printf("enter a physics number:");
  scanf("%d",&p);
  printf("enter a cemistry number:");
  scanf("%d",&c);
  
  printf("\ntotal number is ;%d",m+p+c);
  printf("\npersentage is:%d% \n",(m+p+c)/3);
  per=(m+p+c)/3;
  if (per>=75)
  {
    printf("grade is distaction ");
  }
  else if (per>=60)
  {
    printf("grade is 'A' ");
  }
  else  if (per>=50)
  {
    printf("grade is 'B' ");
  }
  else  if (per>=33)
  {
    printf("grade is 'c' ");
  }
  
  else 
  {
    printf("grade is 'f' ");
  }
  return 0; }