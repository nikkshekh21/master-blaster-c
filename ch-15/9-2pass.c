#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("create your password: ");
	gets(name);
	int len=strlen(name),i,r;
	
	printf("your password's digit: %d\n",len);
	for(i=0;i<=len;i++);
	{
		
	if(r>=0||r<=9)
	{
		if(len>=6&&name==r)
	    {
	         printf("willed password");
		}
		else
		{
			printf("not strong");
		}
	}
}
	

	

	

}
