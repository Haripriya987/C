#include <stdio.h>
void main(){
    int row,column;
    printf("Enter the no of rows\n");
    scanf("%d",&row);
    printf("Enter the no of columns\n");
    scanf("%d",&column);
    int a1[row][column];
    int a2[row][column];
    printf("\n");
    printf("Enter the elements of Matrix 1");
    printf("\n");
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf(" %d ",&a1[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(i==j)
            printf( "%d ",a1[i][j]);
        }
        printf("\n");
    }   
}