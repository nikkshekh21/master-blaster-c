#include<stdio.h>
main()
{
		int s1,i;
	printf("enter arry size: ");
	scanf("%d",&s1);
	int a[s1];
	
	int b[s1];
	int sum[i];
	
	printf("\n\n----:enter arry first size:----\n");
	for(i=0;i<s1;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n----:enter arry second size:----\n");
	for(i=0;i<s1;i++)
	{
		printf("b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	printf("\n\n---:sum of array:---\n");
	for(i=0;i<s1;i++)
	{
		sum[i]=a[i]+b[i];
		printf("sum[%d]=%d\n",i,sum[i]);
	}
	

	
}
