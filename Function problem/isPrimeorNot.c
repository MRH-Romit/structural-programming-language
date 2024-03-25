#include <stdio.h>

void isPrimeorNot(int n) {
    
    if (n <= 1) {
        printf("Not Prime\n");
        return;
    }
    if (n == 2) {
        printf("Prime\n");
        return;
    }
    
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            printf("Not Prime\n");
            return;
        }
    }
    
    printf("Prime\n");
}

int main() {
    printf("Enter the number to check prime or not\n");
    int n;
    scanf("%d", &n);
    isPrimeorNot(n);

    return 0;
}
