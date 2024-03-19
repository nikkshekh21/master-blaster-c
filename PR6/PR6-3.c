#include<stdio.h>
main()
{
	char name[20];
	int al=0,al2=0,sy=0,dit=0;
	printf("Create your password:  ");
	scanf("%s",&name);
	int i,len=0;
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	printf("The number in string : %d\n\n\n",len);
		if(len>=6)
		{
			for(i=0;i<len;i++)
			{
				 if(name[i]>=65&&name[i]<=90)
				{
					al++;	
				}
				else if(name[i]>=97&&name[i]<=122)
				{
					al2++;
				}
				else if((name[i]>=33 &&name[i]<=47) || (name[i]>=58 &&name[i]<=64))
				{
					sy++;
				}
				else if(name[i]>=48&&name[i]<=57)
				{
					dit++;
				}	
			}
	    }
	    else
	    {
			printf(" ..YOUR PASSWORD IS NOT STRONG.. ");
		}
		
		if(al>=1 && al2>=1 && sy>=1 && dit>=1)
		{
			printf(" ...YOUR PASSWORD IS STRONG: >>");
		}
}

