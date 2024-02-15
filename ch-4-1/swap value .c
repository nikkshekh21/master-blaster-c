#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
	int a,b;
	clrscr();
	p("enter first value a= ");
	s("%d",&a);
	p("enter second value b= ");
	s("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	p("\n\na= %d\n",a);
	p("b= %d",b);
	getch();
	
}
