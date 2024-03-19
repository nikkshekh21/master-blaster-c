#include<stdio.h>
#include<conio.h>
main()
{
	float c;
	clrscr();
	printf("The temperature in celcius: ");
	scanf("%f",&c);
	printf("\NThe temperature in fahrenheit: %.2f",(c*9/5)+32);

	getch();
}


