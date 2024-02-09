#include<stdio.h>
#include<conio.h>
main()
{
	int n,rem,rev;
	clrscr();
	
	printf("enter any number: ");
	scanf("%d",&n);
	rem=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	rev=n;
	printf("sum of the  first and last digit: %d",rev+rem);

	getch();
	     







}
