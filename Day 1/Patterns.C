//#include<stdio.h>
int main() {
   int i;
   int j;
   for(i=1;i<=5;i++){
       for(j=1;j<=5;j++){
           if(i==1 || i==5 || j==1 ||j==5)
               printf("*");
           
           else
               printf(" ");
           
           
       }
       printf("\n");
   }
}


//Second program
int main() {
   int i;
   int j;
   int k;
   int n=5;
   for(i=1;i<n;i++){
         for(k=n-i;k>0;k--){
          printf(" ");   
         }
         for(j=1;j<=i;j++){
           printf("%d",i);
           printf(" ");
       }
       printf("\n");
   }
}
    1 
   2 2 
  3 3 3 
 4 4 4 4 

