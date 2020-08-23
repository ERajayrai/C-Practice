#include<stdio.h>
#include<conio.h>
void main()
{
int min,max,i,j,count;
clrscr();
printf("enter min value and max value; ");
scanf("%d%d",&min,&max);
for(i=min;i<=max;i++)
{
    count=0;
    for(j=1;j<=i;j++)
    {
    if(i%j==0)
    count++;
    }
   if(count==2)
   printf("%d",i);
}
getch();
}
