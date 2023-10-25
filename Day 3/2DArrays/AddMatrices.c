#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows");
    scanf("%d",&r);
    printf("Enter the number of columns");
    scanf("%d",&c);
    int a1[r][c];
    int b1[r][c];
    int i,j;
    printf("\n");
    printf("Enter the elements of Matrix 1\n");
     printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a1[i][j]);
        }

    }
    printf("\n");
    printf("Enter the elements of Matrix2\n");
     printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b1[i][j]);
        }
    }
    printf("\n");
    printf("Resultant matrix is:  \n");
     printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf(" %d ",a1[i][j]+b1[i][j]);
        }
            printf("\n");
    }

    return 0;
}