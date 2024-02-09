#include<stdio.h>
#include<conio.h>
main()
{
	char al='a';
	clrscr();
	do
	{
		printf("%c\t",al);
	 	
	 	al+=3;
	 	al++;
	}while(al<='z');
	getch();
}
