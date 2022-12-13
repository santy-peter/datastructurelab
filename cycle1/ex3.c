#include<stdio.h>
int main()
{
	int as,bs,ms,i,j;
	int a[10],b[10],m[10];
	printf("enter size of first array \t");
	scanf("%d",&as);
	printf("enter the elements of first array\n");
	for(i=0;i<as;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter size of second array \t");
	scanf("%d",&bs);
	printf("enter the elements of second array\n");
	for(i=0;i<bs;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<as;i++)
	{
		m[i]=a[i];
	}
	ms=as+bs;
	for(i=0,j=as;i<bs&&j<ms;i++,j++)
	{
		m[j]=b[i];
	}
	printf("MERGED ARRAY \n");
	{
		for(i=0;i<ms;i++)
		{
			printf("%d",m[i]);
			printf("\n");
		}
			return 0;
	}
	
}
