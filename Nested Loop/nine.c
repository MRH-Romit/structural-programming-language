#include <stdio.h>

int main(){

printf("Enter the number binary code do you want to add: \n");
int n;
scanf("%d", &n);

for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        
        if (j%2==0){
            printf("0 ");
        }else{
            printf("1 ");
        } 
        
    }
} 




    return 0;
}