#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i;
clrscr();
printf("enter two number:");
scanf("%d%d",&a,&b);
  for(c=a+1;c<=b-1;c++)
  {
   for(i=2;i<c;i++)
	if(c%i==0)
	break;
   if(i==c)
   printf("%d",c);
  }
getch();
}