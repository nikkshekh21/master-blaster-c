#include<stdio.h>
main()
{
	char r[30],rev[30];
	
	printf("Enter your string: ");
	scanf("%[^\n]",&r);
	 
	int i , len=0;
	for(i=0;r[i]!=NULL;i++)
	{
		len++;
	}

	
	for(i=0;i<len;i++)
	{
		rev[i]=r[i];
	}
	
	printf("\n\n---:revers:--\n");
	
	for(i=0;i<len;i++)
	{
		r[i]= rev[len- i- 1];
	}

	printf("%s",r);
	
	
}