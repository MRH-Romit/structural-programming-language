#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int num = 1;
    for (int i = 1; i <= rows; i++)
    {
        int temp = num;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", temp);
            temp++;
        }
        num++;
        printf("\n");
    }

    return 0;
}
