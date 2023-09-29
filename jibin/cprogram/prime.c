#include<stdio.h>
void main()
{
	int n,i,f=0;
	printf("enter the number");
        scanf("%d",&n);
        for(i=2;i<n;i++)
        {
        if(n%i==0)
        {
        f=1;
        break;
        }
        }
        if(f==0)
        printf("the given number is prime");
        else
        printf("the given number is not prime");
        }



