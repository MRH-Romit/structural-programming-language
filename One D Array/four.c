#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, m, avg = 0, average;
    printf("enter the array size: ");
    scanf("%f", &n);
    float *array = malloc(n * sizeof(float));

    if (!array)
    {
        printf("memory allocation failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("enter input %d: ", i + 1);
        scanf("%f", &m);
        array[i] = m;
        avg += array[i];
    }

    printf("average is:  %.2f", avg / n);

    free(array);

    return 0;
}