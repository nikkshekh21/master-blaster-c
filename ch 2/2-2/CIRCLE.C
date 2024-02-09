
#include<stdio.h>
#include<conio.h>
main()
{
	int r;
	float PI=3.14;
	clrscr();
	printf("enter a radius: ");
	scanf(" %d",&r);
	printf("R : %d\n",r);
	printf("the area of a circle: %.2f",PI*r*r);
	getch();
}


