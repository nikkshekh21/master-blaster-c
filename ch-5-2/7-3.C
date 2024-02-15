#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	clrscr();
	printf("enter character: ");
	scanf("%c",&c);
	if(c=='A'|| c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u'||)
	{
		printf("--%c is vowel!!",c);
	}
	else
	{
		printf("--%c is consonent!!",c);
	}
	getch();
}