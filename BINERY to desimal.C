#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,rem,sum=0;
clrscr();
printf("enter any binery number:");
scanf("%d",&n);
i=0;
while(n>0)
{
	rem=n%10;
	sum=sum+rem*pow(2,i);
	n=n/10;
	i++;
}
printf("desimal is\n=%d",sum);
getch();
}