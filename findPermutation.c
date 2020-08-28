#include<stdio.h>
#include<conio.h>
void main()
{
    int r,n,s,f1,f2,permutation,i;
    printf("enter number of people:");
    scanf("%d",&n);
    printf("enter number of sheats");
    scanf("%d",&r);
    s=n-r;
    f1=1;
    for(i=1;i<=n;i++)
    {
      f1=f1*i;  
    }
    f2=1;
    for(i=1;i<=s;i++)
    {
        f2=f2*i;
        
    }
permutation=f1/f2;
printf("number of way to people seated=%d",permutation);
getch();
}
