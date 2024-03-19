#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	char n;
	clrscr();
	printf("Enter any character = ");
	scanf("%c",&n);
	if(n>='A'&&n<='Z')
	{
		p("\n\t%c = !! Alphabet !!",n);
	}
	else if(n>='a'&&n<='z')
	{
		p("\n\t%c = !! Alphabet !!",n);
	}
	else if(n>'0'&&n<'9')
	{
		p("\n\t%c = !! Number !!",n);
	}
	else
	{
		p("\n\t%c = !! Special character !!",n);
	}
	getch();


}
