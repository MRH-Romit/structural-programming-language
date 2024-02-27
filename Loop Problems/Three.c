#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        if (n % 2 == 0)
            printf("0");
        else
            printf("1");

        if (n > 1)
            printf(", ");
        n--;
    }
}