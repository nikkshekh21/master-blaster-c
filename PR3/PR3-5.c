#include<stdio.h>
#include<conio.h>
main()
{
	int a,n=1;
	clrscr();
	
	for(a=1;a<=5;a++)
	{
		printf("%d\t",n);
		n=n*10+1;
	}
	getch();
}
