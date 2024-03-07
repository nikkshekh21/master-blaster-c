#include<stdio.h>
#include<string.h>
main()
{
	char name[20],myname[20];
	char rev[20];
	printf("Enter your name: ");
	gets(name);
	strlwr(name);
	strcpy(myname,name);
	strcpy(rev,strrev(myname));
	
}
