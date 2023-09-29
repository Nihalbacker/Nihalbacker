#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter two numbers");
scanf("%d%d",&a,&b);
if(a>b)
{
temp=a;
a=b;
b=temp;
}
printf("number in order....%d,%d",a,b);
}
