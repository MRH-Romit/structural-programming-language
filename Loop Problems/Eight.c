#include <stdio.h>

int main()
{
    int n, reverse = 0, temp;
    printf("enter number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        temp = n % 10;
        reverse = reverse * 10 + temp;
        n /= 10;
    }
    printf("Reversed number: %d\n", reverse);

    return 0;
}