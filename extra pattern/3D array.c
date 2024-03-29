#include<stdio.h>
main()
{
    int a,b,c;
	printf("Enter row size: ");
	scanf("%d",&a);
	printf("Enter column size: ");
	scanf("%d",&b);
	printf("Enter elements size: ");
	scanf("%d",&c);
	int size[a][b][c];
	int i,j,n;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			for(n=0;n<c;n++)
			{
				printf("Array a[%d][%d][%d]: ",i,j,n);
				scanf("%d",&size[i][j][n]);
			}
			printf("\n");
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			for(n=0;n<c;n++)
			{
				printf("%d ",size[i][j][n]);
				
			}
			printf("\n");
		}
	}
		for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			for(n=0;n<c;n++)
			{
			   if (i==j==n)
			   {
			  		printf("%d ",size[i][j][n]); 	
			   }
			   else
			   {
			   		printf(" ");
			   }	
			}
			printf("\n");
		}
	}
	printf("\n\noutput: %d",size[i][j][n]);
	
}