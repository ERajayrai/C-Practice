#include<stdio.h>
#include<conio.h>
void main()
{
int tem,n,rn=0;
int r;
printf("enter a number:");
scanf("%d",&n);
tem=n;
while(tem>0)
{
r=tem%10;
rn=rn*10+r;
tem=tem/10;
}
if(n==rn)
{
printf("it palidrome number:");
}
else
{
printf(" its not:");
}
getch();
}
