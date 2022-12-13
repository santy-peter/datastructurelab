#include<stdio.h>
 void main()
{
	int n,a[10],i,j,t;
	
	printf("enter the number of elements to be sorted\n");
	scanf("%d",&n);
	printf("enter the elements to be sorted\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("output\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
}
