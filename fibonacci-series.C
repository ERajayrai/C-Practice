#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n ,count;
clrscr();
printf("enter a term for fabbonic series:");
scanf("%d",&n);
a=0; b=1;
printf("%d",a);
printf("%d",b);
count=2;
while(count<=n)
{
c=a+b;
count=count+1;
printf("%d",c);
a=b;
b=c;
}
getch();
}