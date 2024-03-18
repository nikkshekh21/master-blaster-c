#include<stdio.h>
void array(char a[30]);

void main()
{
	char a[30]; 
	printf("Enter array string:  ");
	scanf("%s",&a);
	array(a);
	
}
void array(char a[30])
{
	
	
	int i,count=0;
		for(i=0;a[i]!=0;i++)
	{
			count++;
	}
	printf("\n\nIn your string Length is: %d",count);
	
}
