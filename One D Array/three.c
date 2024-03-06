#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, even = 0;
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
        if (array[i] % 2 == 0)
        {
            even += array[i];
        }
    }
    printf("even is:  %d", even);

    free(array);

    return 0;
}