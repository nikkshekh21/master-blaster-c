#include<stdio.h>
main()
{

	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(s=i;s>1;s--)
		{
			printf(" ");
		}
			for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
			for(j=4;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=2;i<=5;i++)
	{
			for(s=1;s<i;s++)
			{
				printf(" ");
		    }
	  	for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		
			for(j=4;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
			
	}		
}
