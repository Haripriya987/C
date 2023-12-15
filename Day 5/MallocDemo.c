#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
  int n,i,*ptr,sum=0;
  printf("Enter no of elements");
  scanf("%d",&n);

  ptr=(int*)malloc(n*sizeof(int));
  printf("Enter Elements");
  for(i=0;i<n;i++){
    scanf("%d",ptr+i);
    sum+=*(ptr+i);
  }
  printf("sum =%d ", sum);
  free(ptr);
  return 0;
}