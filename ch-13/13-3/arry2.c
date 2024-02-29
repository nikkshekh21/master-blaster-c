#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int s1,s2,i;
	printf("enter arry first size: ");
	scanf("%d",&s1);
	int a[s1];
	
	printf("enter arry second size: ");
	scanf("%d",&s2);
	int b[s2];
	int c[s1+s2];
	
	p("\n\n----:enter arry first size:----\n");
	for(i=0;i<s1;i++)
	{
		p("a[%d] : ",i);
		s("%d",&a[i]);
	}
	p("\n\n----:enter arry second size:----\n");
	for(i=0;i<s2;i++)
	{
		p("b[%d] : ",i);
		s("%d",&b[i]);
	}
	for(i=0;i<s1;i++)
	{
	    c[i]=a[i];
	}
	for(i=0;i<s2;i++)
	{
	    c[i+s1]=b[i];
	} 
	p("the marge arry------ :- ");
	for(i=0;i<s1+s2;i++)
	{
	     p("%d ",c[i]);
	} 
	
}
