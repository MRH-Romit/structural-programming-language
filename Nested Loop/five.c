#include <stdio.h>
int main() {
    int n;
    printf("Enter the number to print: \n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}