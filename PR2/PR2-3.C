#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	int a,b,c,d;
	clrscr();
	p("Enter a first value of a : ");
	scanf("\n%d",&a);
	p("Enter  a second value of b : ");
	scanf("\n%d",&b);
	p("Enter a third value of c : ");
	scanf("\n%d",&c);
	p("Enter a fourth value of d = ");
	scanf("\n%d",&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d is maximum number!!",a);
			}
			else
			{
				printf("%d is maximum number!!",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is maximum number!!",c);
			}
			else
			{
				printf("%d is maximum number!!",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d is maximum number!!",b);
			}
			else
			{
				printf("%d is maximum number!!",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is maximum number!!",c);
			}
			else
			{
				printf("%d is maximum number!!",d);
			}
		}
	}

	getch();
}
