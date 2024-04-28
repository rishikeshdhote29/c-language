#include<stdio.h>
#include <stdlib.h>

int main()
{{        float a,b,c,d;
          char op ;
          printf(" enter a value ");
          scanf("%f", &a);
          printf(" enter a op ");
          scanf(" %c", &op);
          printf(" enter a value ");
          scanf("%f", &b);
                            switch (op)
                        {
                            case '+':
                              // printf("sum is%d",a+b);
                              c = b + a;

                              break;
                            case '-':
                              // printf("sum is%d",a-b);
                              c = a-b;
                              break;
                            case '*':
                              // printf("sum is%d",a*b);
                              c = a*b;
                              break;
                            case '/':
                              // printf("sum is%f",a/(float)b);
                              c = a/b;
                              break;
                          
                          default:

                              printf(" error");
                        }
            printf(" enter a op ");
            scanf(" %c", &op);

            if (op == '+' || op == '-' || op == '*' || op == '/')
            {
              printf(" enter a value ");
              scanf("%f", &a);
              
            }
            else
            {
              printf("answer is %.2f", c);
            }
            while (op == '+' || op == '-' || op == '*' || op == '/')

            {
              switch (op)
              {
              case '+':
                // printf("sum is%d",a+b);
                c = c + a;

                break;
              case '-':
                // printf("sum is%d",a-b);
                c = c - a;
                break;
              case '*':
                // printf("sum is%d",a*b);
                c = c * a;
                break;
              case '/':
                // printf("sum is%f",a/(float)b);
                c = c / a;
                break;

              default:

                printf(" error");
                }
                printf(" enter a op ");
                scanf(" %c", &op);

                if (op == '+' || op == '-' || op == '*' || op == '/')
                {
                  printf(" enter a value ");
                  scanf("%f", &a);
                }
                else if (op=='=')
                {
                  printf("answer is %.3f",c);
                }
              }
            }
            
system("pause");
            return 0;
}
