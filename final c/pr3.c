#include<stdio.h>
main()
{
	int n,i;
	printf("Enter your array size: ");
	scanf("%d",&n);
	int lag[n],small,swap;
	for(i=0;i<n;i++)
	{
		printf("Array[%d]: ",i);
		scanf("%d",&lag[i]);
	}
	for(i=0;i<n;i++)
	{
		if(lag[i]<lag[i+1])
		{
			swap=lag[i];
			lag[i+1]=lag[i];
			lag[i]=swap;
		}
		
		
	}
	printf("THE SMALLEST ELEMENTS : %d",swap);
}