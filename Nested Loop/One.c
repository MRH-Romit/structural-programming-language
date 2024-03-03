#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <= 3; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
