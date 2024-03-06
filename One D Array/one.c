#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, m;

    printf("enter the array size: ");
    scanf("%d", &n);

    int *array = malloc(n * sizeof(int));

    if (!array)
    {
        printf("memory allocation failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("enter input %d: ", i + 1);
        scanf("%d", &m);
        array[i] = m;
    }
    printf("Elements in the array:\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", array[i]);
        printf("\n");
    }

    printf("Reverse of the array:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
        printf("\n");
    }

    free(array);

    return 0;
}