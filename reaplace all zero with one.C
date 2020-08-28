#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int ans,rem,power=0,sum=0;
clrscr();
printf("enter any number");
scanf("%ld",&ans);
while(ans!=0)
{
rem=ans%10;
ans=ans/10;
if(rem==0)
rem=1;
sum=sum+rem*pow(10,power);
power++;
}
printf("sum=%ld",sum);
getch();
}