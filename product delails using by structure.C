#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,i;
 struct product
 {
 char name[50];
 int price;
 int discountpercentage;
 };
 struct product * p;
 printf("enter the number of product p:");
 scanf("%d",&n);
 p=(struct product *)calloc(n,sizeof(struct product));
 for(i=0;i<n;i++)
 {
 printf("enter the name of product p:");
 scanf("%s",&(p+1)->name);
 printf("enter the price of product p:");
 scanf("%d",&(p+1)->price);
 printf("enter the discount percentage of product p:");
 scanf("%d",&(p+1)->discountpercentage);
 printf("%s\n",(p+1)->name);
 printf("%d\n",(p+1)->price);
 printf("%d\n",(p+1)->discountpercentage);
 }
getch();
}
