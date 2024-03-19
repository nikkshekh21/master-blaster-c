#include<stdio.h>
#include<conio.h>
main()
{
	char al='a';
	clrscr();
	printf("Alphabets :---\n");
	do
	{
		printf("%c ,\t",al);
	 	
	 	al+=3;
	 	al++;
	}while(al<='z');
	getch();
}
