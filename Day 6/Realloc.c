#include <stdio.h>
#include <stdlib.h>
int main(){
int *ptr,n1,n2,i;
 n1=5;
ptr=(int*)malloc(n1*sizeof(int));

printf("Adresses of allocated memeory");
for(i=0;i<n1;i++){
  printf("%p\n",ptr+i);

}
printf("we are changing to new size");
n2=12;

ptr=realloc(ptr,n2*sizeof(int));

printf("Adresses of new allocated memeory");
for(i=0;i<n2;i++){
  printf("%p\n",ptr+i);

}

free(ptr);
  return 0;
}