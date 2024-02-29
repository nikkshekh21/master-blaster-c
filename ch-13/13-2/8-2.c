#include<stdio.h>
main()
{
	int size,i,sum=0,avg;
	printf("Enter array size: ");
	scanf("%d",&size);
	int a[size];
	
		printf("\n\n----:enter arry elements:----\n");

	for(i=0;i<size;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
		for(i=0;i<size;i++)
	{
		sum=sum+a[i];
		avg=sum/size;
	}
	printf("\nlength of an array: %d",avg);
	
	
}
