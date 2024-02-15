#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	int a,b,c,d;
	clrscr();
	p("enter a first value of a : ");
	scanf("\n%d",&a);
	p("enter  a second value of b : ");
	scanf("\n%d",&b);
	p("enter a third value of c : ");
	scanf("\n%d",&c);
	p("enter a fourth value of d = ");
	scanf("\n%d",&d);
	if(a>b)
	{
		if(a>c)
		{
			if(c>d)
			{
				printf("%d is maximum",a);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is maximum",c);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d is maximum",b);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("%d is maximum",c);
			}
			else
			{
				printf("%d is maximum",d);
			}
		}





	}

	getch();
}