#include <stdio.h>
void main(){
    int x=20,y=30,z=40;

    int *p[3];
    p[0]=&x;
    p[1]=&y;
    p[2]=&z;
    for(int i=0;i<3;i++){
        printf("%p\n",*p+i);
    }
     for(int i=0;i<3;i++){
        printf("%d\n",**(p+i));
    }
    printf("%lu  Bytes",sizeof(p));
    return;
}
