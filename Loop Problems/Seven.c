#include <stdio.h>

int main()
{
    char input;
    printf("Enter characters and also  type 'A' to exit :\n");
    do
    {
        scanf(" %c", &input);
        printf("You entered: %c\n", input);
    } while (input != 'A');

    printf("Exiting...\n");

    return 0;
}