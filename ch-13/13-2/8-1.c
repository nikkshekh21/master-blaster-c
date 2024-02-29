#include<stdio.h>
main()
{
	int size,i;
	printf("Enter array size: ");
	scanf("%d",&size);
	int a[size];
	
		printf("\n\n----:enter arry elements:----\n");
	for(i=0;i<size;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nlength of an array: %d",size);
	
	
}
