#include<stdio.h>
#include<conio.h>
main()
{
	int a,HRA,DA,TA,t;
	clrscr();
	printf("Base salary: ");
	scanf("%d",&a);
    	HRA=a*10/100;
	    DA=a*5/100;
	    TA=a*8/100;
	t=HRA+DA+TA;
	printf("  HRA=10\n DA=5\n TA=8\n");
	printf("Total add : %d\n",t);
	printf("Total salary: %d",a+t);
	getch();
}
