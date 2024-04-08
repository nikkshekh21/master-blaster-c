#include<stdio.h>

void main()
{
	int n,i;
	printf("enter array size: ");
	scanf("%d",&n);
	int a[n];
	printf("\n----:Enter array size:---\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	asending(a,n);
	descending(a,n);
}
void asending(int a[],int n)
{
	int i,j,num=0;
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
	printf("\n---:ascending order:---\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}


void descending(int a[],int n)
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
	printf("\n---:descending order:---\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}