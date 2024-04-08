#include<stdio.h>

main()
{
	char name[20];
	
	printf("enter your string: ");
	scanf("%[^\n]",&name);
	printf("\n\nyour string\t: %s",name);
	
	int i,j,len=0;
	
	
	for(i=0;name[i]!='\0';i++){
		len++;
	}
		
	for(i=0;i<len;i++)
	{
		if(name[i]>=65 && name[i]<=90)
	  	{
	  		name[i] = name[i]+32;
	  	}
	  	else if(name[i]==32)
	  	{
	     	if(name[i+1]>=97 && name[i+1]<=122)
	     	{
	     		name[i+1] -= 32;	
		 	}
		 	for(j=i; j<len; j++) {
		 		name[j]	= name[j+1];
			}
			len--;
			i++;
	    }
	}
		printf("\n\n--:  Your string convert to camelCase :--\n\n");
	for(i=0; i< len ; i++)
	{
		printf("%c",name[i]);
	}
}
