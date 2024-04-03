
#include<stdio.h>
main()
{
	int n,i;
	int *ptr;
	int **rev;
	
	printf("Enter the array's size: ");
	scanf("%d",&n);
	int a[n];
		for(i=0;i<n;i++)
	{
		printf("array : a[%d]:= ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n---:revrse array: ---\n");
	
	for(i=n-1;i>=0;i--)
	{
		ptr=&a[i];
		rev=&ptr;
	
	printf("arry : a[%d]: %d\n",n-(i+1),**rev);
    }
}