#include<stdio.h>
#define max 50
void enqueue();
void dequeue();
void display();
int queue[max];
int rear=-1;
int front=-1;
void main()
{
	int choice;
	do
	{
		printf("1.Enqueue \n 2.Dequeue \n 3.Display\n");
		printf("enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		    case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exit \n");
				break;
			default:
				{
					printf("Please enter valid choice\n");
					
				}
			}
		
		}
		while(choice!=4);
		 //return 0;
}
void enqueue()
{
	int data;
	if (rear==max-1)
	{
		printf("Queue is overflow\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
			printf("Insert element :");
			scanf("%d",&data);
			rear=rear+1;
			queue[rear]=data;
			
		}
	}

}
void dequeue()
{
	if(front==-1||front>rear)
	{
		printf("Queue overflow\n");
	}
	else
	{
		printf("element deleted is %d\n",queue[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Queue is :\n");
		for(i=front;i<rear;i++)
		{
			printf("%d",queue[front]);
			printf("\n");
		}
	}
}
