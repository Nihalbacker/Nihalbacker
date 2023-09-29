#include<stdio.h>
#include<math.h>
void main()
{
	float m1,m2,m3,sum,avg;
	char name;
	printf("enter the name:");
	scanf("%s",&name);
	printf("enter the marks:");
	scanf("%f%f%f",&m1,&m2,&m3);
	sum=m1+m2+m3;
	avg=(sum)/3;
	printf("avg marks is=%f",avg);
}
