#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i;
	printf("enter the elements of first array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements of second array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	printf(" BEFORE SWAPPING\n ");
	printf("first array\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("second array\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf(" AFTER  SWAPPING\n ");
	printf("first array\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("second array\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
	
}
