#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
if(x>0 && y>0)
printf("its first quadrant");
else if(x<0 && y>0)
printf("its second quadrant");
else if(x<0 && y<0)
printf("its 3rd quadrant");
else if(x>0 &&y <0)
printf("its 4th quadrant");
else
printf("its origin");
getch();
}