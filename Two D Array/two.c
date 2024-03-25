#include <stdio.h>

int main() {
int n,i,j,m;
printf("Enter the number of row and columns: \n");
scanf("%d %d",&n,&m);
int arr[n][m];

for (i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("Enter the element of %d row and %d column\n",i,j);
        scanf("%d",&arr[i][j]);
                    }
                }

//row to column
for (i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d ",arr[i][j]);
                    }
                    printf("\n");
                }




return 0;
}

