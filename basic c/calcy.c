#include<stdio.h>
int main()
{ int a,b;
char  choice;
 printf("enter two integers:");
 scanf("%d %d",&a,&b);
 printf("select an opreration");
 printf("\nfor add +\n subtract-\nmultiuply *\n divide /\n");
 printf("enter your choice:");
 scanf(" %c",&choice);
 switch (choice)
 {
 case '+':
    printf("sum is%d",a+b);
    break;
    case '-':
    printf("sum is%d",a-b);
    break;
    case '*':
    printf("sum is%d",a*b);
    break;
    case '/':
    printf("sum is%f",a/(float)b);
    break;
 
//  default: 5
//  printf("wrong input");
//     break;
 }

    return 0;
}