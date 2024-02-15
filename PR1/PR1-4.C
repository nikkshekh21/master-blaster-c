#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter the first number A: ");
	scanf("%d",&a);
	printf("enter the second number B: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("A : %d\n",a);
	printf("B : %d\n",b);
	getch();


}
