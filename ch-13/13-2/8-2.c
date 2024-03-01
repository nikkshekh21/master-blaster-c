#include<stdio.h>
main()
{
	int size,i,sum=0;
	float avg;
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
		avg=sum/(float)size;
	}
<<<<<<< HEAD
	printf("\nlength of an array: %.2f",avg);
=======
	printf("\nlength of an array: %.2d",avg);
>>>>>>> 3e30b2bb55584d535566f900e3a33ae51bc513ad
	
	
}
