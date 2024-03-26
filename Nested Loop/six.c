#include <stdio.h>

int result(int n);  

int main() {
    printf("Enter the number to print: \n");
    int n;
    scanf("%d", &n);
    result(n);
    return 0;
}

int result(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
