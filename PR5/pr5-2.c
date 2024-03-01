#include<stdio.h>
main()
{
	int r,c,i,j;
	printf("enter array row size: ");
	scanf("%d",&r);
	printf("enter array column size: ");
	scanf("%d",&c);
	int a[r][c],large=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}	
	}

		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(large<a[i][j])
			{
				large=a[i][j];
			}
		}	
	}
		printf("the largest elements is :%d",large);
	 
}
