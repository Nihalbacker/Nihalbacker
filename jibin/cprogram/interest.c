#include<stdio.h>
void main()
{
float p,n,r,i;
printf("enter the principle number of years rate and interest:");
scanf("%f%f%f",&p,&n,&r);
i=(p*n*r)/100;
printf("the interest is=%f",i);
}
