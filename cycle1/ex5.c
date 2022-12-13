#include<stdio.h>
int stack[100],ch,n,top,x,i;
void push();
void pop();
void display();
int main()
{
	top=-1;
	printf("enter the size of stack :");
	scanf("%d",&n);
	printf("1.Push \n 2.Pop \n 3.Display \n 4.Exit");
	do{
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
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
	while(ch!=4);
	   return 0;
}
	void push()
	{
		if(top>=n-1)
		{
			printf("Stack overflow\n");
		}
		else
		{
			printf("enter value to be pushed \n");
			scanf("%d",&x);
			top++;
			stack[top]=x;
		}
	}
	void pop()
	{
		if(top<=1)
		{
			printf("Stack underflow\n");
			
		}
		else
		{
			printf("Popped element is %d",stack[top]);
			top--;
		}
	}
	void display()
	{
		if(top>=0)
		{
			printf("Elements in stack are :\n");
			for(i=top;i>=0;i--)
			{
				printf("%d",stack[i]);
				printf("\n");
			}
			printf("Next choice\n");
		}
		else
		{
			printf("stack is empty\n");
		}
	}

