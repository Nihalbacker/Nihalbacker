#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,ch,odd,even,positive,negative;
for(;;)
{
printf("1.odd or even\n");
printf("2.positive or negative\n");
printf("3.exit\n");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("enter a number:");
	scanf("%d",&n);
	if(n%2==0)
	{
	printf("the number is even");
	}
	else
	{
	printf("the number is odd");
	}
	break;
case 2:
	printf("enter the numbers");
	scanf("%d",&n);
	if(n>0)
	{
	printf("the number is positive");
	}
	else
	{
	printf("the number is negative");
	}
	break;
case 3:
	exit(0);
  break;
default:
       {
	printf("invalid number");
       }
}
}
}
