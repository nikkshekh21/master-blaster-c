#include<stdio.h>
main()
{
	char name[20];
	printf("enter you string: ");
	scanf("%s",&name);
	int i,j,len=0;
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	printf("the number in string : %d\n\n\n",len);
	int count;
	printf("Frequency of each letter:\n");
	
	for(i=0;i<len;i++)
	{ 
		count=1;
		if(name[i]!=0)
		{
			for(j=i+1;j<len;j++)
		{
		if(name[i]==name[j])
		{
			count++;
			name[j]='\0';
		}
	    
		
        }
        	printf("%c==>%d\n",name[i],count);
		} 	
		
    }
    
}

