#include<stdio.h>
#include<conio.h>

main()
{

	int u;
	float bill;
	clrscr();
	printf("for the first 50 units Rs.0.50/unit\n");
	printf("for the first 100 units Rs.0.75/unit\n");
	printf("for the first 100 units Rs.1.2/unit\n");
	printf("for the first 250 units Rs.1.5/unit\n");
	printf("enter your unit: ");
	scanf("%d",&u);
	clrscr();
	if(u>=0&&u<=50)
	{
		bill=u*0.5;
		printf("bill : %.2f",bill);
	}
	else if(u>=100&&u<=150)
	{
		bill=(u-50)*0.75+25;
		printf("bill : %.2f",bill);
	}
	else if(u>=150&&u<=250)
	{
		bill=(u-150)*1.2+100;
		printf("bill : %.2f",bill);
	}
	else
	{
		bill=(u-250)*1.5+220;
		printf("bill : %.2f",bill);
	}
	printf("\nan additional surcharge of 20%% is added in your bill");
	printf("total amount: %.2f",bill+(bill*0.2));
	getch();
}






