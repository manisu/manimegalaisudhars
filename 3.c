#include<stdio.h>
void main()
{
int num,digit,reverse=0;
printf("\n enter the number");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
num=num/10;
reverse=reverse*10+digit;
}
printf("\n reversed digit is %d",reverse);
getch();
}
