#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,t;
	clrscr();
	printf("enter principal: ");
	scanf("%f",&p);
	printf("enter interest rate: ");
	scanf("%f",&r);
	printf("enter time in years: ");
	scanf("%f",&t);
	printf("principal : %.2f\n",p);
	printf("interest rate : %.2f\n",r);
	printf("time : %.2f\n",t);
	printf("the simple interest: "p*r*t/100);
	getch();
}