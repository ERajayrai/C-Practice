#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,n;
  struct employee
  {
  char name[20];
  int age;
  int salary;
  };
  struct employee * e;
  printf("enter the value number of employee e:");
  scanf("%d",&n);
 e =(struct employee*)calloc(n,sizeof(struct employee));
  for(i=0;i<n;i++)
  {
  printf("enter the name of emloyee e:");
  scanf("%s",&(e+1)->name);
  printf("enter the age of employee e:");
  scanf("%d",&(e+1)->age);
  printf("enter the salary of employee e:");
  scanf("%d",&(e+1)->salary);
  printf("%s\n",(e+1)->name);
  printf("%d\n	",(e+1)->age);
  printf("%d\n",(e+1)->salary);
  }
  free(e);
 getch();
}
