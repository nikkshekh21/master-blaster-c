#include<stdio.h>
#include<conio.h>
main()
{
	float c;
	clrscr();
	printf("the temperature in celcius: ");
	scanf("%f",&c);
	printf("the temperature in fahrenheit: %.2f",(c*9/5)+32);

	getch();
}


