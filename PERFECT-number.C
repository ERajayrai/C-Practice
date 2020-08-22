#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,temp,sum=0;
clrscr();
printf("enter any number:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
    if(n%i==0)
    {
    sum+=i;
    }
}

if(n == sum)
{
printf(" is perfect number");
}
else
{
printf("is not perfect number");
}
getch();
}