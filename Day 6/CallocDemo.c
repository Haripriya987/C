#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,*ptr;
  
  // printf("Enter number of elements");
  // scanf("%d",&n);

  ptr=(int*)calloc(4,sizeof(int));
   *ptr=50;
   *(ptr+1)=60;
   *(ptr+2)=70;
    
    printf("%d\n%d\n%d\n%d",*ptr=50, *(ptr+1),*(ptr+2),*(ptr+3));
    free(ptr);
return 0;
}
