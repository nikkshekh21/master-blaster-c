#include<stdio.h>
main()
{
	int r;
	printf("Enter your size: ");
	scanf("%d",&r);
	int rev[r],a[r],i;
	
	for(i=0;i<r;i++)
	{
		printf("array a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<r;i++)
	{
		rev[i]=a[i];
	}
	printf("---:Your array:---\n");
		for(i=0;i<r;i++)
	{
		printf("\na[%d] : %d",i,a[i]);
	}
	printf("\n\n---:revers:--\n");
	
	for(i=0;i<r;i++)
	{
		a[i]= rev[r- i- 1];
	}
	for(i=0;i<r;i++)
	{
		printf("\na[%d] : %d",i,a[i]);
	}
		for(i=0;i<r;i++)
	{
		
	}
	
	
}
	