#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,temp,sum=0;
printf("enter any number\n:");
scanf("%d",&n);
temp=n;
while(temp)
{
sum+=temp%10;
temp=temp/10;
}
rem=n%sum;
if(rem == 0)
printf("harshad number");
else
printf("not harshad numbrer");
getch();
}