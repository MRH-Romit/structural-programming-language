#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter score: ");
    scanf("%d", &n);

    while (n != 0)
    {
        printf("%d is printed\n", i);
        n--;
        i = i + 2;
    }
    return 0;
}