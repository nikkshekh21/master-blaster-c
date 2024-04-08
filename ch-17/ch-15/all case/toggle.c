#include<stdio.h>

main()
{
	char name[20];
	printf("enter your string: ");
	scanf("%[^\n]",&name);
	printf("\n\nyour string\t: %s",name);
	int i,len=0;
	for(i=0;name[i]!='\0';i++)
	len++;
	printf("\n\n--:  Your string convert to togglecase  :--\n");
	for(i=0;i<len;i++)
	{
		if(name[i]>=65&&name[i]<=90)
		{
			name[i]=name[i]+32;
		}
		else if(name[i]>=97&&name[i]<=122)
		{
			name[i]=name[i]-32;	
		}
	}
	printf("togglecase string: %s",name);
}
