#include <stdio.h>
int main()
{
    int num, i = 1, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &num); // accepting an integer from the user
    do
    {
        fact = fact * i;                              // multiplying the factorial by i
        i++;                                          // incrementing i by 1
    } while (i <= num);                               // repeating the loop until i is less than or equal to num
    printf("The factorial of %d is %d\n", num, fact); // printing the factorial
    return 0;
}
