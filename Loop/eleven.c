#include <stdio.h>

int main()
{
    int total = 0, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        total += (i * i) * (i + 1);
    }

    printf("Sum of the series for the first %d terms: %d\n", n, total);

    return 0;
}
