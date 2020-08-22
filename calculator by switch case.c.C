#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n;
while(1)
{
clrscr();
printf("\n1.addition");
printf("\n2.subtraction");
printf("\n3.multiplication");
printf("\n4.division");
printf("\n5.exit");
printf("\nenter your choice:");
scanf("%d",&n);
switch(n)
{
	case 1:
		{
		printf("enter first value:");
		scanf("%d",&a);
		printf("enter second value :");
		scanf("%d",&b);
		c=a+b;
		printf("addition=%d",c);
		break;
		}
	case 2:
		{
		printf("enter fist value:");
		scanf("%d",&a);
		printf("enter second value:");
		scanf("%d",&b);
		c=a-b;
		printf("subtraction=",c);
		}
		break;
	case 3:
		{
		printf("enter first value:");
		scanf("%d",&a);
		printf("enter second value:");
		scanf("%d",&b);
		c=a*b;
		printf("multiplication=%d",c);
		}
		break;
	case 4:
		{
		printf("enter first value:");
		scanf("%d",&a);
		printf("enter second value:");
		scanf("%d",&b);
		c=a/b;
		printf("division=%d",c);
		}
		break;
	case 5:
		{
		printf("exit");
		exit(0);
		}
		break;
	defult :
		printf("enter correct value");
}
getch();
}
