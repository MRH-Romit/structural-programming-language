#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, array_size, sum = 0, temp;
    printf("enter the array size: ");
    scanf("%d", &array_size);
    int *array1 = malloc(array_size * sizeof(int));
    int *array2 = malloc(array_size * sizeof(int));
    int *resultArray = malloc(array_size * sizeof(int));
    if (!array1 || !array2 || !resultArray)
    {
        printf("Memory allocation failed!");
        free(array1);
        free(array2);
        free(resultArray);
        return 1;
    }

    // for array one

    for (int i = 0; i < array_size; i++)
    {
        printf("enter input for array one, %d: ", i + 1);
        scanf("%d", &n);
        array1[i] = n;
    }

    // for array two

    for (int i = 0; i < array_size; i++)
    {
        printf("enter input for array two, %d: ", i + 1);
        scanf("%d", &n);
        array2[i] = n;
    }
    // result array
    for (int i = 0; i <= array_size; i++)
    {
        resultArray[i] = array1[i] + array2[i];
    }
    // printing out the result array

    printf("new result array is: ");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", resultArray[i]);
    }

    free(array1);
    free(array2);
    free(resultArray);

    return 0;
}
