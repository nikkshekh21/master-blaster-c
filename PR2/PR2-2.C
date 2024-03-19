#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	int n;
	clrscr();
	printf("enter any number = ");
	scanf("%d",&n);
	(n%2==0)
		?p("\n%d is enven number!!",n)
		:p("\n%d is odd number!!",n);
	getch();


}
