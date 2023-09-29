#include<stdio.h>
#include<stdlib.h>
#define size 10
int que[size];
int front=0,rear=0;
void main()
{
void enque(int);
int deque();
int search(int),ans;
int option ,item;
do
{
	printf("\n 1. INSERT\n");
	printf("\n 2. DELETE\n");
	printf("\n 3. SEARCH\n");
	printf("\n 4. EXIT\n");
	printf("option:");
	scanf("%d",&option);
switch(option)
{
	case 1:printf("item");
		scanf("%d",&item);
		enque(item);
		break;
	
	case 2:item=deque();
		printf("item=%d\n",item);
		break;
	case 3:printf("item to search:");
		scanf("%d",&item);
		ans=search(item);
			if(ans!=0)
		printf("%d FOUND AT %d position\n",item,ans);
	else
		printf("%d NOT FOUND",item);
		break;
	case 4:exit(0);
	}
}
while(1);
}
void enque(int item)
{
int t;
t=(rear+1)%size;
if (t==front)
{
printf("que is full");
exit(1);
}
else
{
rear=t;
que[rear]=item;
}
}

int deque()
{
if(front==rear)
{
printf("que is empty");
exit(2);
}
front=(front+1)%size;
return que[front];
}

//function to search

int search(int item)
{
int t1,t2;
t1=front,t2=rear,t1=(t1+1)%size;
while(t1!=t2 && que[t1]!=item)
t1=(t1+1)%size;
if(que[t1]==item)
return t1;
}

