#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter first angle: ");
	scanf("%d",&a);
	printf("enter second angle: ");
	scanf("%d",&b);
	printf("third angle: %d",180-(a+b));
	getch();
}
