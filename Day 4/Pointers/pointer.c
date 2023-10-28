#include <stdio.h>
void main(){
    int a=169;
    int* ptr=&a;
    int** ptr2=&ptr;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",ptr);
    printf("%p\n",**ptr2);
    printf("%d",*ptr);
    return;
}