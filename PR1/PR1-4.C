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
	a=a*b;
	b=a/b;
	a=a/b;
	printf("---:Swap the number:---\n");
	printf("A : %d\n",a);
	printf("B : %d\n",b);
	getch();


}
