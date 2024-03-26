#include <stdio.h>

 int  square(int n) {
    return (n * n);
}

int main() {

printf("Enter the number to find square\n");
int n;
scanf("%d", &n);
square(n);
    return 0;
}