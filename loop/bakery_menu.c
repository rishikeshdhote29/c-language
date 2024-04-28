#include<stdio.h>
#include<stdlib.h>
int main()
{ int ch,item,bill=0;

     printf("**welcome To Bake n Shake**");

            do
            { printf("\n1. Cake - 200rs");   
            printf("\n2.pastry-130rs");
            printf("\n3.patties - 60rs");
            printf("\n4. quit");
            printf("\nenter your choice:");
                scanf("%d",&ch);
            
                    switch (ch)
                    {
                    case 1:
                    {
                        printf(" enter number of item:");
                        scanf("%d", &item);
                        bill = bill + 200 * item;
                        printf("Done!");
                    }
                        break;
                    case 2:
                    {
                        printf(" enter number of item:");
                        scanf("%d", &item);
                        bill = bill + 130 * item;
                        printf("Done!");
                    }
                    
                        break;
                    case 3:
                    {
                        printf(" enter number of item:");
                        scanf("%d", &item);
                        bill = bill + 60 * item;
                        printf("Done!");
                    }

                        break;
                    case 4:
                    {    printf("your total bill is:%d\n **Visit Again**",bill);
                       }   break;
                    default:
                    {  printf("wrong input") ;break;
                    }
            }   }  while (ch == 1 || ch == 2 || ch == 3||ch>4);
system ("pause");
  return 0;
} 