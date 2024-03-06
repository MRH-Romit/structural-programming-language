#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, temp;
    printf("enter input: ");
    scanf("%d", &n);

    int *array1 = malloc(n * sizeof(int));
    int *array2 = malloc(n * sizeof(int));

    if (!array1 || array2)
    {
        printf("Memory allocation problem.");
        return 1;
    }
    // taking input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        array1[i] = m;
    }

    // revesing the input to output

    for (int i = 0; i < n; i++)
    {
        // reversedArray[i] = originalArray[n - 1 - i];
    }

    free(array1);
    free(array2);

    return 0;
}