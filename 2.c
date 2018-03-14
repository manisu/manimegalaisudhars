#include<stdio.h>
void main()
{
int a,i,fact=1;
printf("\n enter the num");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact=fact*i;
}
printf("\n factorial=%d",fact);
getch();
}
