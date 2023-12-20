#include <stdio.h>
#include <string.h>

struct Student{
  char name[20];
  int adm;
  float avg;
};
int main(){
 struct Student s1;
 strcpy(s1.name,"abc");
 s1.adm=2023;
 s1.avg=80.23;

printf("Name: %s\n",s1.name);
printf("Adm no:  %d\n",s1.adm);
printf("Average: %.2f\n",s1.avg);

return 0;

}
