#include<stdio.h>
main()
{
	char n;
	printf("enetr any string");
	scanf("%c",&n);
	printf("\n\nyour string\t:%s\n",n);
	int i,len=0;
	n=name;
	for(i=0;name[i]!='\0';i++)
    {
    	len++;
	}
	 
	 printf("--:your string convert to uppercase:--");
	 for(i=0;i<len;i++)
	 {
	 	if(name[i]>=97&&name[i]<=122)
	 	{
	 		name[i]=name[i]-32;
		}
	 }
	 printf("uppercasee string\t:%c\n",n);
}
