#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("enter a year");
scanf("%d",&year);
if(year%400 == 0)
printf(" this year is leap year:");
else if(year%100 == 0)
printf(" not leap year");
else if(year%4 == 0)
printf("leap year");
else
printf(" is not leap year");
getch();
}