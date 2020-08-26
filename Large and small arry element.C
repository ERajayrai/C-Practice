#include<stdio.h>
#include<conio.h>
void main()
{
int n,arr[100],i,small,large;
clrscr();
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the value of elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
small=arr[0];
large=arr[0];
for(i=0;i<n;i++)
{
   if(arr[i]<small)
   {
   small=arr[i];
   }
   if(arr[i]>large)
   {
   large=arr[i];
   }
}
printf("\nlarge element:-%d",large);
printf("\nsmall element is=%d",small);
getch();
}