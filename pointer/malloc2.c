#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));

    // Check if the memory allocation was successful
    if (arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize and print the array
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
