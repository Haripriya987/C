#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter the number of rows for m1 \n");
    scanf("%d",&r1);
    printf("Enter the number of columns for m1 \n");
    scanf("%d",&c1);

    printf("Enter the number of rows for m2 \n");
    scanf("%d",&r2);
    printf("Enter the number of columns for m2 \n ");
    scanf("%d",&c2);


    int a1[r1][c1];
    int b1[r2][c2];
    int res[r1][c2];
    int i,j,k;
    printf("\n");
    printf("Enter the elements of Matrix 1\n");
     printf("\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a1[i][j]);
        }

    }
    printf("\n");
    printf("Enter the elements of Matrix2\n");
     printf("\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b1[i][j]);
        }
    }
    printf("\n");
    if(c1==r2){

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
        res[i][j]=0;
        for(k=0;k<c1;k++)
        res[i][j]=a1[i][k]+b1[k][j];
            
        }
            printf("\n");
    }
     printf("Resultant matrix is:  \n");
     printf("\n");
     
     for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf(" %d ",res[i][j]);
        }
        printf("\n");
     }



    }
    else{
        printf("columns of m1 is not equal to rows of m2 ");
    } 

    return 0;
}