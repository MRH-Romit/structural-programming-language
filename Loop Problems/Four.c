#include <stdio.h>

int main()
{
    float n, average, sum = 0;
    int userInput, count;

    printf("Enter how many numbers of avg you want: ");
    scanf("%d", &userInput);

    count = userInput;

    printf("Enter the numbers: ");
    while (userInput != 0)
    {
        scanf("%f", &n);
        sum += n;
        userInput--;
    }

    if (count != 0)
    {
        average = sum / count;
        printf("Average is %f\n", average);
    }
    else
    {
        printf("Cannot calculate average (no input)\n");
    }

    return 0;
}