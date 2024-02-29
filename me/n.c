#include<stdio.h>
#define CYN "\e[0;35m"
main()
{
	int i,j,s;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(  i==1&&(j==2||j==3||j==5||j==6)||i==2||i==3||i==4&&(j==2||j==3||j==4||j==5||j==6)||i==5&&(j==3||j==4||j==5)||i==6&&(j==4))
			{
				printf("n ");
			}
			else
			{
				printf("  ");
			}
    	}
			printf("\n");
			

    }
}
