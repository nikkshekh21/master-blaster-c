#include<stdio.h>
void array(int size,int sum);

void main()
{
	int size,sum=0; 
	printf("Enter array size:  ");
	scanf("%d",&size);
	array(size, sum);
	
}
void array(int size,int sum)
{
	
	int a[size], i;
		for(i=0;i<size;i++)
	{
		printf("Enter value %d : ",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("\n\tThe sum of an Array: %d",sum);
}
