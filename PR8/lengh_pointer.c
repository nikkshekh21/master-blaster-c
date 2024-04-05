#include<stdio.h>
void main()
{
	char n[30];
	int len=0,i;
    int *ptr;
	printf("Enter any string: ");
	scanf("%[^\n]",&n);
	for(i=0;n[i]!='\0';i++)
	{
		ptr[i]=&n[i];
	}
    for(i=0;n[i]!='\0';i++)
	{
		len++;
	}
	*ptr=&len;
	printf("\n THE LENGTH OF YOUR STRING : %d",len);
}