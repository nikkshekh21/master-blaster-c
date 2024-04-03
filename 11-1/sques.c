#include<stdio.h> 
main()
{
	int n,i;
	int *ptr;
	ptr=&n;
	printf("Enter the array's size: ");
	scanf("%d",&n);
	int a[n];
	int *square[n];
	for(i=0;i<n;i++)
	{
		printf("array : a[%d]:= ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		 printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		 square[i]=&a[i];
	}
	printf("\n\n--:square of each elements:--\n\n");
	for(i=0;i<n;i++)
	{
		 printf("%d\t",(*square[i])*(*square[i]));
	}
}