#include<stdio.h>
main()
{
	int i , len = 0;
	char name[30];
	printf("Enter your string: ");
	scanf("%s",&name);
	
	for(i=0;name[i]!=NULL;i++)
	{
		len+= sizeof(name[i]);
	}
	int n = len/ sizeof(name[0]);
	printf("lenght of your string: %d",n);
}