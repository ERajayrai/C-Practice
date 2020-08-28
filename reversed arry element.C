#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[100],i;
clrscr();
printf("enter the size of arry");
scanf("%d",&n);
printf("enter the element of arry");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("reversed arry is:\n");
for(i=n-1;i>=0;i--)
{
printf("%d\n",arr[i]);
}
g etch();
}