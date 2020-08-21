#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,sum=0;
printf("enter any number for n:");
scanf("%d",&n);
for(int i=1;i<n;i++)
{
     if(n%i==0)
     {
     sum+=i;
     }
}
if(n<sum)
{
printf("abundant number");
}
else
{
printf("not abundent number");
}
getch();
}