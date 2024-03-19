#include<stdio.h>
#include<conio.h>
main()
{
	int n,ld,fd,sum=0;
	clrscr();
	
	printf("Enter any number: ");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=ld+fd;
	printf(" \nThe sum of the  first and last digit\t: %d",sum);
	getch();
	     







}
