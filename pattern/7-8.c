#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,num=1;
	clrscr();
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
	getch();
}

