

#include <iostream>

using namespace std;
{
    int arr[5], i;
    friend

    for (i = 0; i < 5; i++)
    {
        printf("enter a number:");
        scanf("%d", &arr[i]);
    }

    printf("you entered:");

    for (i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]);
    }

    return 0;
}