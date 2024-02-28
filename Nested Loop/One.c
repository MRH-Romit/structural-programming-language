#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++)
    {
        // Inner loop for printing the sequence "123"
        for (j = 1; j <= 3; j++)
        { // You want to print "123", so loop from 1 to 3
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
