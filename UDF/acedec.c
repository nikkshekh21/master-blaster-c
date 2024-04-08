#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n];
	printf("\n----:Enter array values:----\n\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	ascend(a,n);
	descend(a,n);
}
void ascend(int a[],int n)
{
	int i,j=0,num=0;
	for(i=0;i<n;i++,j++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				num=a[i];
				a[i]=a[j];
				a[j]=num;
			}
		}
	}
	printf("\n------:Ascending order:-----\n\n");
		for(i=0;i<n;i++)
	{
		printf("%d\t: ",a[i]);
	}
}
	void descend(int a[],int n)
{
	int i,j,num=0;
	for(i=0;i<n;i++,j++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				num=a[i];
				a[i]=a[j];
				a[j]=num;
			}
		}
	}
		printf("\n------:Descending order:-----\n\n");
		for(i=0;i<n;i++)
	{
		printf("%d\t: ",a[i]);
	}
}
