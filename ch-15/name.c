#include<stdio.h>
main()
{
	char name[20];
	printf("enter name: ");
	scanf("%[^\n]",&name);
	printf("\n\nname\t:%s\n",name);
}
