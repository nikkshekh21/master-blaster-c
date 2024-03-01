#include<stdio.h>
main()
{
	int r,c,i,j;
	printf("enter array row size: ");
	scanf("%d",&r);
	printf("enter array column size: ");
	scanf("%d",&c);
	int a[r][c],sum=0,r1,c1,sum1=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");	
	}
	printf("enter row size:");
	scanf("%d",&r1);
	printf("Elements of %d row: ",r1);

		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==r1)
			{
				printf("%d, ",a[i][j]);
				sum+=a[i][j];	
			}
		}	
	}
	printf("\nthe sum of row: %d\n\n",sum);	
	printf("enter column size:");
	scanf("%d",&c1);
	printf("Elements of %d column : ",c1);

		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==c1)
			{
				printf("%d, ",a[i][j]);
				sum1+=a[i][j];	
			}
		}	
	}
	printf("\nthe sum of column:%d",sum1);	
	
	
	 
} 
