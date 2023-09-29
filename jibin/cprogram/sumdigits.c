#include<stdio.h>
void main()
{
	int n,sum=0,rem=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
     	n=n/10;
        sum=sum+rem;
        rem=n%10;
        }
        printf("sum of digit=%d\n",sum);
}

    
