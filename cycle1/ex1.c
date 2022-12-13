#include<stdio.h>
void main()
{
int a[100],n,i,s,f=0;
printf("enter the size of array \n");
scanf("%d",&n );
printf("enter the elements\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the number to be searched\t");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
    f=1;
}

}
if(f==1)
{
    printf("The number is present in the array");
}
else
{
    printf("The number is not present in the array");
}
}

