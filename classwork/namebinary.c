#include<stdio.h>
main()
{
	char n[30];
	int i,len=0,count;
	printf("enter your name: ");
	scanf("%[^\n]",&n);
	for(i=0; n[i]!='\0' ;i++)
	{
		len++;
	}
	printf("your name lenght: %d",len);
	for(i=0;i<len;i++)
	{
		if('n'%2==0)
		{
		printf("%d",n);
		count++;
		}
		else
		{
		printf("%d",n);
		count++;
			
		}
		
	}
	
}