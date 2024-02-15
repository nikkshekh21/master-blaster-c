#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
	int x,y;
                    clrscr();
	p("enter the first value x= ");
	s("%d",&x);
	p("enter the second value y= ");
	s("%d",&y);
	p("\n\nFORMULA = (x+y)^3");
	p("\n\nanswer = %d",(x+y)*(x+y)*(x+y));
                   getch();
}
