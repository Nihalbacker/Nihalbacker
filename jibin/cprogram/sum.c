// to print sum and average of two numbers
#include<stdio.h>
void main()
{
int no1,no2,sum;
float avg;
printf("enter two numbers");
scanf("%d%d",&no1,&no2);
sum=no1+no2;
avg=sum/2.0;
printf("sum=%d,average=%f",sum,avg);
}
