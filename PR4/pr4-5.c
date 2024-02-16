#include<stdio.h>
main()
{

	int i,j,s;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
			for(s=4;s>=i;s--)
		{
			printf("    ");
		}
			for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
			for(s=i;s<5;s++)
		{
			printf("    ");
		}
			for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
			
		printf("\n");
	}		
}
