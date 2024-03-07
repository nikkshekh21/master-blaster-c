#include<stdio.h>
main()
{
	char name[20],rev[20];
	printf("enter you string: ");
	scanf("%s",&name);
	int i,len=0;
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	printf("the number in string : %d\n\n\n",len);
	int n=0;
	
	for(i=len-1;i>=0;i--,n++)
	{
		rev[n]=name[i];
	}
		int pal=0;
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==rev[i])
		{
			pal=1;
		}
		else
		{
			pal=0;
			break;
		}
    }   
	
	if(pal==1)
	{
		printf("...>> this name is palindrom <<...");
	}
	else
	{
		printf("...>> this name is not palindrom <<...");
	}
    
		
	
	
	
}
