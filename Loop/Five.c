#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers (X Y): ");
    scanf("%d %d", &x, &y);
    int square = x * x;
    printf("Square of %d: %d\n", x, square);
    while (x != y)
    {
        if (x < y)
        {
            x++;
        }
        else
        {
            x--;
        }
        square = x * x;
        printf("Square of %d: %d\n", x, square);
    }
    printf("Reached!\n");
    return 0;
}