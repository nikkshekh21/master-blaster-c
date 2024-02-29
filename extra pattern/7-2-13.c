#include<stdio.h>
main()
{
	int i,j,s;
	for(i=65;i>=69;i--)
	{
		for(s=1;s<i;s++)
		{
			printf("  ");
		}
		for(j=i;j<=69;j++)
		{
				printf(" *");
		}
		
		printf("\n");
	}
	
}
