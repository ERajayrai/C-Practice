#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double r1,r2,k,a,b,c,realpart,imaginarypart;
    printf("enter the co-officiant of a b c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    k=b*b-4*a*c;
    if(k>0)
    {
        r1=(-b+sqrt(k))/(2*a);
        r2=(-b-sqrt(k))/(2*a);
        printf("r1=%.2lf and r2=%.2lf",r1,r2);
    }
    else if(k==0)
    {
        r1=r1=-b/(2*a);
        printf("r1=r2=%.2lf",r1);
    }
    else
    {
        realpart=-b/(2*a);
        imaginarypart=sqrt(-k)/(2*a);
        printf("r1=%.2lf+%.2lfi and r2=%.2f-%.2fi",realpart,imaginarypart,realpart,imaginarypart);
    }
getch();    
}