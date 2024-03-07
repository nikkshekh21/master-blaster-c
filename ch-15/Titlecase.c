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
	printf("\n\n--:  Your string convert to Titlecase :--\n");
		
	    if(name[0]>=97&&name[0]<=122)
		{
			
			name[0]=name[0]-32;
		}
		
		
	printf("Title string: %s",name);
}
