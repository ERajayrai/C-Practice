#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,rem,i=0,sum=0;
clrscr();
printf("enter octal number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
sum=sum+rem*pow(8,i);
n=n/10;
i++;
}
printf("decimal number->%d",sum);
getch();
}