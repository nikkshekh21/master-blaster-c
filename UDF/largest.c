#include<stdio.h>
void large(int n,int a[]);
int main()
{
	int n,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	large(n,a);
	
}
void large(int n,int a[])
{
	int i,j,num=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>num)
		{
			num=a[i];
		}
	}
	printf("\n\nThe largest number in array: %d",num);
}