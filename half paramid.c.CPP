#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter any number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   for(j=2;j<=i+1;j++)
   {
   printf("%d",i,j);
   }
  printf("\n");
}
getch();
}