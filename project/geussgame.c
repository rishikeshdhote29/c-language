#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ int num,atmp=1;
    // Use current time as seed for random number generator
    srand(time(NULL));

    // Generate and print a random number between 1 and 100
    int random_number = rand() % 100 + 1;
    //printf("The random number is: %d\n", random_number);
    printf("**welcome to geuss number game**\n");

    printf("enter a number");
    scanf("%d", &num);
    do 
    {
        // printf("enter a number");
        // scanf("%d", &num);
        atmp++;
        if (num<random_number)
        {
            printf("number is grater than this");
            scanf("%d",&num);
        }
        else if (num > random_number)
        {
            printf("number is smaller than this");
            scanf("%d", &num);
        }
        if (num == random_number)
        {
            printf("correct number");
            break;
        }
    } while(atmp<10); 
     if(num==random_number)
     {
        printf("yah! you geussed number");
     }
    else
     {
       printf(" all attemps is over \n you lose this game\n try agian ");
     }
     

    return 0;
}
