#include<stdio.h>
#include<conio.h>
int getdigite(int n);
int exp(int value,int power);
void main()
{
int n,sqr,rem;
clrscr();
printf("enter a any number");
scanf("%d",&n);
if(n>0)
{
      sqr=n*n;
     int digite=getdigite(n);
     //printf("\nprint gatedigit is=%d",digite);
      rem=sqr%exp(10,digite);
     // printf("\nremainder=%d",exp(10,3));
      if(n==rem)
      {
      printf("\n%d number is automorfice",n);
      }
      else
      {
      printf("\n%d not automorfice number",n);
      }
}
else
{
printf("invalide input");
}
getch();
}
int getdigite(int n)
{
int count=0;
 while(n>0)
 {
 count++;
 n=n/10;
 }
 return(count);
}
int exp(int value,int power)
{
       int total=1;
       for(int i=0;i<power;i++)
       {
	total=total*value;
       }
       return total;
}