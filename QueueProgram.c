#include<stdio.h>
#define N 5
int q[N];
int front=-1,rear=-1,i,item;
void Enqueue();
void Dequeue();
void Peek();
void Display();
int main()
{
	int ch=0;
	while(ch!=4)
	{
		printf("\n 1:for Enqueue");
		printf("\n 2:for Deueue");
		printf("\n 3:for Peek");
		printf("\n for Display");
		printf("\nenter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				Enqueue();
				break;
				case 2:
				Dequeue();
				break;
				case 3:
				Peek();
				break;
				case 4:
				Display();
				break;
			
				default:
				printf("sorry wrong");
		}
		
	}
	return 0;
}
void Enqueue()
{
	//int item;
	printf("enter an item\n");
	scanf("%d",&item);
	if(rear==(N-1))
	{
		printf("\nQueue is full");
	}
	else
	if(front==-1 && rear==-1)
	{
		front=rear=0;
	}
	else
	{
		rear=rear+1;
	}
	q[rear]=item;
}
void Dequeue()
{
	if(front==-1)
	{
		printf("\n underflow");
	}
	else
	if(front==rear)
	{
		item=q[front];
		front=rear=-1;
	}
	else
	{
		item=q[front];
		front++;
	}
		/*item=q[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}*/
	printf("\n the %d is deleted",item);
	
}
void Display()
{
	if(front==-1 && rear==-1)
	{
		printf("\n take rest");
	}
	else
	{
		i=front;
		for(;i<=rear;i++)
		{
			printf("%d  ",q[i]);
		}
	}
}
void Peek()
{
		if(front==-1 && rear==-1)
		{
			printf("\n empty ");
		}
		else
		{
			item=q[front];
			printf("%d  :",item);
		}
}
