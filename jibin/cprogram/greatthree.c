#include<stdio.h>
void main()
{
 int a,b,c;
 printf("enter the numbers:\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b&&a>c)
 {
   printf("the gratest is %d\n",a);
 }
 else(b>c&&b>a)
 {
   printf("the greatest is %d\n",b);
 }
}

