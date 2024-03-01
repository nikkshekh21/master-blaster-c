#include<stdio.h>
main()
{
	int s,i,j;
	printf("enter array size: ");
	scanf("%d",&s);
	int a[s];
	for(i=0;i<s;i++)
	{
		printf(" a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
	  printf("the negative elements from an aaray:");
	for(i=0;i<s;i++)
	{
		if(a[i]<0)
		{
			printf("%d,",a[i]);
		}
		
	}
}
