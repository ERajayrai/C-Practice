#include<stdio.h>
#include<conio.h>
void main()
{
int n,b[100],i,j;
clrscr();
printf("enter any decimal number\n");
scanf("%d",&n);
i=0;
while(n>0)
{
b[i]=n%2;
n=n/2;
i++;
}
for(j=i-1;j>=0;j--)
printf("%d",b[j]);
getch();
}