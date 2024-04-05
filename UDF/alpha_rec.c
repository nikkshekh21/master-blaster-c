#include<stdio.h>
void alpha(char al);
void main()
{
  	char al='A';
  	alpha(al);
}
void alpha(char al)
{
	if(al<='Z')
	{
		printf("%c\t",al);
		al++;
	    alpha(al);
		
	}
}
	
