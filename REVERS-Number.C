#include<stdio.h>
#include<conio.h>
void main()
{
int n,rn=0;
int rem;
clrscr();
printf("enter a number:");
scanf("%d",&n);
while(n|=0)
{
rem=n%10;
rn=rn*10+rem;
n=n/10;
}
printf("reverse number is%d",rn);
getch();
}
