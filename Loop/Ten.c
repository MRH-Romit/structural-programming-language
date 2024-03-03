#include <stdio.h>

int main()
{
    int second_number, total, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    second_number = 2;

    for (int i = 1; i <= n; i++)
    {
        if (i <= n)
        {
            total = (i * i) * second_number;
            printf("%d ", total);
            second_number += second_number;
        }
        else
        {
            printf("error");
        }
    }
    return 0;
}