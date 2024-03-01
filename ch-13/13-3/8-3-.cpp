#include<stdio.h>
main()
{
	int r,c;
	printf("enter row size: ");
	scanf("%d",&r);
	printf("enter column size: ");
	scanf("%d",&c);
	int a[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int sum;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0||j==0||i==r-1||j==c-1)
			{
				sum+=a[i][j];
				printf("%d",a[i][j]);	
		    }
		    else
		    {
		    	printf(" ");
			}
		}
		printf("\n");
	}
	printf("sum of 2 digit: ",sum);
}
