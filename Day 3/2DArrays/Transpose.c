#include <stdio.h>
void main(){
  int row,column;
    printf("Enter the no of rows\n");
    scanf("%d",&row);
    printf("Enter the no of columns\n");
    scanf("%d",&column); 
    int arr[row][column];
//int transpose[column][row];
    int i,j;
    printf("\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    printf("/n");
    printf("The original array is: \n");
     for(i=0;i<row;i++){
        for(j=0;j<column;j++){
           printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("/n");
    printf("The transpose of a matrix is\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
           printf(" %d ",arr[j][i]);
        }
         printf("\n");
    }
    
}