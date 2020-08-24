#include<stdio.h>
#include<conio.h>
void main()
{
int n,max;
clrscr();
printf("enter number of student in class: ");
scanf("%d",&n);
max=n*(n-1)/2;
printf("maximum number of handshake in class=%d",max);
getch();
}