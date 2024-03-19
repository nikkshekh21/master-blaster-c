#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter first angle: ");
	scanf("%d",&a);
	printf("Enter second angle: ");
	scanf("%d",&b);
	printf("Third angle: %d",180-(a+b));
	getch();
}
