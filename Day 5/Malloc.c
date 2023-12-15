#include <stdio.h>
int main(){
  int a=5;
  int *p;
  p=&a;
  void *vp;
  vp=&a;
  printf("%p\n%p\n",p,vp);
  printf("%d\n",*p);
 // printf("%d\n",&vp);
  return 0;

}
// gcc -o exefilename filename.c
// ./exefilename