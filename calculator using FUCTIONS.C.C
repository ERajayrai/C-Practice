#include<stdio.h>
#include<conio.h>
int a,b,n;
void add();
void sub();
void multi();
void div();
void main()
{
	printf("\t\tchoose any one opction");
	printf("\n1.addition\n");
	printf("2.substriction\n");
	printf("3.multiplication\n");
	printf("4.division\n");
	printf("\t\tchoose to any one");
	scanf("%d",&n);

	switch(n)
	{
	case 1:
	printf("\t\topction addition is slected\n");
	add();
	break;
	case 2:
	printf("\t\topction substrication is selected\n");
	sub();
	break;
	case 3:
	printf("\t\topction multiplication is selected\n");
	multi();
	break;
	case 4:
	printf("\t\topction division is selected\n");
	div();
	break;
	default:
	printf("hy im ajay you select wrong opction");
	}
	getch();
	}

	void add()
	{
	int c;
	printf("enter the 1st valve for a:\n");
	scanf("%d",&a);
	printf("enter the 2nd value for b:\n");
	scanf("%d",&b);
	c=a+b;
	printf("addition=%d",c);
	}

	void sub()
	{
	int c;
	printf("enter the 1st value for a:\n");
	scanf("%d",&a);
	printf("enter the 2nd value for b:\n");
	scanf("%d",&b);
	c=a-b;
	printf("substriction is=%d",c);
	}

	void multi()
	{
	int c;
	printf("enter thr 1st value for a:\n");
	scanf("%d",&a);
	printf("enter the 2nd value for b:\n");
	scanf("%d",&b);
	c=a*b;
	printf("multiplication is=%d",c);
	}

	void div()
	{
	int c;
	printf("enter the 1st value for a:\n");
	scanf("%d",&a);
	printf("enter the value for b:\n");
	scanf("%d",&b);
	c=a/b;
	printf("division id=%d",c);
	}