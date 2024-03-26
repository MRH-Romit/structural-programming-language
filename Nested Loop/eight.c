#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of asterisks you want to print per line: \n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) { // Loop for the number of lines
        for (int j = 1; j <= i; j++) { // Loop for the number of asterisks per line
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}