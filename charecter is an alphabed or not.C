#include<stdio.h>
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a charecter:");
scanf("%c",&ch);
if(ch>=('a') && ch<=('z'))
printf("charecter is alfabet%c",ch);
else
printf("charecter is not alfabet%c",ch);
getch();
}