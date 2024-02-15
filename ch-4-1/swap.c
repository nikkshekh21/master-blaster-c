#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
	int a,b,c;
                   clrscr();
	p("enter value of a: ");
	s("%d",&a);
	p("enter value of b: ");
	s("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	p("a= %d\n",a);
	p("b= %d",b);
                   getch();
	
}
