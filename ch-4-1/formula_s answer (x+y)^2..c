#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main(){
	int x,y;
	clrscr();
	p("x= ");
	s("%d",&x);
	p("y= ");
	s("%d",&y);
	p("\n\nFORMULA = (x+y)^2");
	p("\n\nanswer = %d",(x+y)*(x+y));
	getch();
}
