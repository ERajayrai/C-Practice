#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int bin,dic=0,ocl=0,rem,i=0;
clrscr();
printf("enter the binery number:-");
scanf("%ld",&bin);
while(bin!=0)
{
rem=bin%10;
dic=dic+rem*pow(2,i);
bin=bin/10;
i++;
}
i=1;
rem=0;
while(dic!=0)
{
rem=dic%8;
ocl=ocl+i*rem;
i=i*10;
dic=dic/8;
}
printf("octer number-:%d",ocl);
getch();
}