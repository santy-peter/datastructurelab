#include<stdio.h>
void main()
{
	int m,n,p,i,j,k,a[10],b[10],c[10];
	printf("enter size of first array \t");
	scanf("%d",&m);
	printf("enter the elements of first array\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter size of second array \t");
	scanf("%d",&n);
	printf("enter the elements of second array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0,j=0,k=0;(i<m)&&(j<n);i++,j++)
	{
		c[k]=a[i];
		k++;
		c[k]=b[j];
		k++;
	}
	if(m>n)
	{
		while(i<m)
		{
			c[k]=a[i];
			k++;
			i++;
		}
	}
	else
	{
		while(j<n)
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	printf("MERGED ARRAY \n");
	p=m+n;
	for(i=0;i<p;i++)
	{
		printf("%d",c[i]);
		printf("\n");
	}
}
